/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstfirst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:38:40 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/10/04 16:39:16 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

t_dlist	*ft_dlstfirst(t_dlist *dlst)
{
	if (!dlst)
		return (NULL);
	while (dlst->prev)
		dlst = dlst->prev;
	return (dlst);
}
