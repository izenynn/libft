/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:57:26 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 19:39:45 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <libft/ft_str.h>
# include <libft/ft_nbr.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		wd;
	int		dot;
	int		dash;
	int		zero;
	int		sharp;
	int		sp;
	int		plus;
	int		tlen;
	int		sign;
	int		is_zero;
	int		perc;
}	t_print;

int		ft_printf(const char *format, ...);
t_print	*ft_initialise_tab(t_print *tab);
t_print	*ft_clear_flags_tab(t_print *tab);
void	ft_printf_char(t_print *tab);
void	ft_printf_str(t_print *tab);
void	ft_printf_int(t_print *tab);
void	ft_printf_uint(t_print *tab);
void	ft_printf_ptr(t_print *tab);
void	ft_printf_hex(t_print *tab, char flag);

#endif
