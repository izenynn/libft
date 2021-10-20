/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:59:16 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 12:16:51 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_printf.h>

static void	ft_handle_left_align(int d, t_print *tab)
{
	tab->wd--;
	while (tab->wd-- > 0)
	{
		if (tab->zero)
			tab->tlen += write(d, "0", 1);
		else
			tab->tlen += write(d, " ", 1);
	}
}

static void	ft_handle_right_align(int d, t_print *tab)
{
	tab->wd--;
	while (tab->wd-- > 0)
		tab->tlen += write(d, " ", 1);
}

void	ft_printf_char(int d, t_print *tab)
{
	char	c;

	c = va_arg(tab->args, int);
	if ((tab->zero || tab->wd) && !tab->dash)
		ft_handle_left_align(d, tab);
	tab->tlen += write(d, &c, 1);
	if (tab->wd && tab->dash)
		ft_handle_right_align(d, tab);
}
