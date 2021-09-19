/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:43:42 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/17 17:44:23 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t				i;
	short				sign;
	unsigned int		pow_ten;

	i = 1;
	pow_ten = 1;
	sign = 0;
	if (n < 0 && ++sign)
		n = -n;
	while (n / pow_ten / 10 && ++i)
		pow_ten *= 10;
	i = 0;
	if (sign)
		ft_putchar_fd('-', fd);
	while (pow_ten)
	{
		ft_putchar_fd(n / pow_ten + '0', fd);
		n %= pow_ten;
		pow_ten /= 10;
	}
}
