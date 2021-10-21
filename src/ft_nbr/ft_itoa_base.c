/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 01:53:11 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/10/21 01:53:12 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_nbr.h>
#include <libft/ft_str.h>
#include <libft/ft_mem.h>
#include <stdlib.h>

char	*ft_itoa_base(int n, const char *base)
{
	size_t	i;
	char	*out;
	short	sign;
	short	is_neg;
	int		base_l;

	is_neg = 0;
	sign = 1;
	if (n < 0 && ++is_neg)
		sign = -1;
	base_l = ft_strlen(base);
	out = (char *)ft_calloc(1, ft_intlen_base(n, base_l) + is_neg + 1);
	if (!out)
		return (NULL);
	i = 0;
	if (!n)
		out[i++] = '0';
	while (n)
	{
		out[i++] = base[n % base_l * sign];
		n /= base_l;
	}
	if (sign == -1)
		out[i++] = '-';
	return (ft_strrev(out));
}
