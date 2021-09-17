/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:21:24 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/16 18:33:32 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	size_t			i;
	char			*out;
	short			sign;
	unsigned int	pow_ten;

	i = 1;
	pow_ten = 1;
	sign = 0;
	if (n < 0 && ++sign)
		n = -n;
	while (n / pow_ten / 10 && i++)
		pow_ten *= 10;
	out = ft_calloc(i + sign + 1, 1);
	if (!out)
		return (NULL);
	i = 0;
	if (sign)
		out[i++] = '-';
	while (pow_ten)
	{
		out[i++] = n / pow_ten + '0';
		n %= pow_ten;
		pow_ten /= 10;
	}
	return (out);
}
