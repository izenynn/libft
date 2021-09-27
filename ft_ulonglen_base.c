/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulonglen_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:54:06 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 14:54:10 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ulonglen_base(unsigned long n, int base_len)
{
	int	cnt;

	cnt = 1;
	while (n >= base_len)
	{
		n /= base_len;
		cnt++;
	}
	return (cnt);
}
