/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 02:58:03 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 17:28:16 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_str.h"

char	*ft_strrev(char *s)
{
	char	*start;
	char	*end;
	char	tmp;

	start = s;
	end = s + (ft_strlen(s) - 1);
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
	return (s);
}
