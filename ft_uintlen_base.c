/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:53:56 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 14:53:57 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uintlen_base(unsigned int n, int base_len)
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
