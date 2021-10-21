/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 03:27:21 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/10/21 03:27:22 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_nbr.h>
#include <stddef.h>

char	*ft_convert_base(char *n, char *base_from, char *base_to)
{
	int	tmp;

	if (!n || !base_from || !base_to)
		return (NULL);
	tmp = ft_atoi_base(n, base_from);
	return (ft_itoa_base(tmp, base_to));
}
