/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:42:49 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/17 17:42:58 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_mem.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*save;

	if (!dst && !src)
		return (NULL);
	save = dst;
	if (src < dst)
	{
		dst += len;
		src += len;
		while (len--)
			*(unsigned char *)--dst = *(unsigned char *)--src;
	}
	else
		while (len--)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (save);
}
