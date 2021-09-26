/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uinthexlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:58:01 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/26 13:01:51 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uinthexlen(unsigned int n)
{
	int	cnt;

	cnt = 1;
	while (n > 15)
	{
		n /= 16;
		cnt++;
	}
	return (cnt);
}
