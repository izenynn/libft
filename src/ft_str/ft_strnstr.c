/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:47:43 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 17:51:04 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_str.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		i = 0;
		while (haystack[i] && haystack[i] == needle[i] && len - i)
		{
			if (!needle[i + 1])
				return ((char *)haystack);
			++i;
		}
		len--;
		haystack++;
	}
	return (NULL);
}
