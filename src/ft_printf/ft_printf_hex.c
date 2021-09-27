/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:03:15 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 14:55:34 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_printf.h>

static int	ft_get_print_len(t_print *tab, int len)
{
	int	print_len;

	if (tab->dot)
	{
		if (tab->dot > len)
			print_len = tab->dot - 1;
		else
			print_len = len;
	}
	else if (tab->zero)
	{
		if (tab->wd > len)
			print_len = tab->wd;
		else
			print_len = len;
	}
	else
		print_len = len;
	if (tab->sharp)
		print_len += 2;
	return (print_len);
}

static void	ft_handle_zeros(t_print *tab, unsigned int n, int print_len)
{
	print_len -= ft_uintlen_base(n, 16);
	if (tab->sharp)
		print_len -= 2;
	while (print_len-- > 0)
		tab->tlen += write(1, "0", 1);
}

static void	ft_handle_left(t_print *tab, int print_len, char flag,
		unsigned int n)
{
	if (!tab->dash)
	{
		tab->wd -= print_len;
		while (tab->wd-- > 0)
			tab->tlen += write(1, " ", 1);
	}
	if (tab->sharp && n)
	{
		if (flag == 'x')
			tab->tlen += write(1, "0x", 2);
		else
			tab->tlen += write(1, "0X", 2);
	}
	ft_handle_zeros(tab, n, print_len);
}

static void	ft_handle_right_align(t_print *tab, int print_len)
{
	if (!tab->dash)
		return ;
	tab->wd -= print_len;
	while (tab->wd-- > 0)
		tab->tlen += write(1, " ", 1);
}

void	ft_printf_hex(t_print *tab, char flag)
{
	unsigned int	n;
	unsigned int	pow;
	char			c;
	int				print_len;

	n = va_arg(tab->args, unsigned long);
	print_len = ft_get_print_len(tab, ft_uintlen_base(n, 16));
	ft_handle_left(tab, print_len, flag, n);
	pow = 1;
	while (n / pow / 16)
		pow *= 16;
	while (pow)
	{
		c = n / pow + '0';
		if (!(c >= '0' && c <= '9'))
		{
			c += 7;
			if (flag == 'x')
				c += 32;
		}
		tab->tlen += write(1, &c, 1);
		n %= pow;
		pow /= 16;
	}
	ft_handle_right_align(tab, print_len);
}
