/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:37:56 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/10/04 16:38:27 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

t_dlist	*ft_dlstlast(t_dlist *dlst)
{
	if (!dlst)
		return (NULL);
	while (dlst->next)
		dlst = dlst->next;
	return (dlst);
}
