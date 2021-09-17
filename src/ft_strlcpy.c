/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:05:40 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/17 02:45:52 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char	*save;

	if (!dstsize)
		return (ft_strlen(src));
	save = (char *)src;
	dstsize--;
	while (*src && dstsize--)
		*dst++ = *src++;
	*dst = '\0';
	return (ft_strlen(save));
}
