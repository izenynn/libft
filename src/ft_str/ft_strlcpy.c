/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:47:19 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/18 00:51:57 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_str.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
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
