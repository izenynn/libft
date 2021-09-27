/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:00:12 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 19:39:17 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_printf.h>
#include <stddef.h>

static size_t	ft_handle_dot(t_print *tab, size_t print_len)
{
	tab->dot--;
	if (print_len > (size_t)tab->dot)
		print_len = tab->dot;
	return (print_len);
}

static void	ft_handle_left_align(t_print *tab, size_t print_len)
{
	tab->wd -= print_len;
	while (tab->wd-- > 0)
	{
		if (tab->zero)
			tab->tlen += write(1, "0", 1);
		else
			tab->tlen += write(1, " ", 1);
	}
}

static void	ft_handle_right_align(t_print *tab, size_t print_len)
{
	tab->wd -= print_len;
	while (tab->wd-- > 0)
		tab->tlen += write(1, " ", 1);
}

void	ft_printf_str(t_print *tab)
{
	char	*s;
	size_t	print_len;

	s = va_arg(tab->args, char *);
	if (!s)
	{
		tab->tlen += write(1, "(null)", 6);
		return ;
	}
	print_len = ft_strlen(s);
	if (tab->dot)
		print_len = ft_handle_dot(tab, print_len);
	if ((tab->zero || tab->wd) && !tab->dash)
		ft_handle_left_align(tab, print_len);
	tab->tlen += write(1, s, print_len);
	if (tab->wd && tab->dash)
		ft_handle_right_align(tab, print_len);
}
