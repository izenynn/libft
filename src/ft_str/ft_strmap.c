/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 23:40:06 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 17:27:18 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_str.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*out;

	if (!s || !f)
		return (NULL);
	out = malloc(ft_strlen(s) + 1);
	if (!out)
		return (NULL);
	while (*s)
		*out++ = f(*s++);
	*out = '\0';
	return (out);
}
