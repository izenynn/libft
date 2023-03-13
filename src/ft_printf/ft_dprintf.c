/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:57:12 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 17:29:46 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"

int	handle_dprintf(int d, const char *format, va_list args);

int	ft_dprintf(int d, const char *format, ...)
{
	va_list	args;
	int		ret;

	va_start(args, format);
	ret = handle_dprintf(d, format, args);
	va_end(args);
	return (ret);
}
