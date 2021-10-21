/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:31:54 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 19:50:47 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_char.h>

int	ft_atoi(const char *str)
{
	short			sign;
	unsigned long	ret;

	ret = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' && str++)
		sign = -1;
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		ret = ret * 10 + ((unsigned long)*str++ - '0');
	return ((int)(ret * sign));
}
