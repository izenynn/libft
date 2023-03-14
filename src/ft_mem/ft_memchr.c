/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:42:30 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 18:15:18 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_mem.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		++p;
	}
	return (NULL);
}
