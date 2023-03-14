/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:43:18 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 17:56:43 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_mem.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len--)
		*(p++) = (unsigned char)c;
	return (b);
}
