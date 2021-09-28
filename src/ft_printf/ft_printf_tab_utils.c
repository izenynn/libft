/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tab_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:17:21 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/28 12:17:25 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_printf.h>

t_print	*ft_initialise_tab(t_print *tab)
{
	tab->wd = 0;
	tab->dot = 0;
	tab->dash = 0;
	tab->zero = 0;
	tab->sharp = 0;
	tab->sp = 0;
	tab->plus = 0;
	tab->tlen = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}

t_print	*ft_clear_flags_tab(t_print *tab)
{
	tab->wd = 0;
	tab->dot = 0;
	tab->dash = 0;
	tab->zero = 0;
	tab->sharp = 0;
	tab->sp = 0;
	tab->plus = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}
