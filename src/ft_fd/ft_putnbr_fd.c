/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:43:42 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 19:52:46 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_fd.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int		abs;
	int					cnt;
	short				sign;
	unsigned int		pow_ten;

	cnt = 0;
	pow_ten = 1;
	sign = 0;
	if (n < 0 && ++sign)
		abs = (unsigned int)-n;
	else
		abs = (unsigned int)n;
	while (abs / pow_ten / 10)
		pow_ten *= 10;
	if (sign)
		cnt += ft_putchar_fd('-', fd);
	while (pow_ten)
	{
		cnt += ft_putchar_fd((char)(abs / pow_ten) + '0', fd);
		abs %= pow_ten;
		pow_ten /= 10;
	}
	return (cnt);
}
