/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:57:26 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/10/07 11:23:32 by dpoveda-         ###   ########.fr       */
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
	int		d;
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

int	ft_printf(const char *format, ...);
int	ft_dprintf(int d, const char *format, ...);

#endif
