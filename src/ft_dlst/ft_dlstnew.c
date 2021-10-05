/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:28:33 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/10/04 16:36:18 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

t_dlist	*ft_dlstnew(void *content)
{
	t_dlist	*newdlst;

	newdlst = (t_dlist *)malloc(sizeof(t_dlist));
	if (!newdlst)
		return (NULL);
	newdlst->content = content;
	newdlst->next = NULL;
	newdlst->prev = NULL;
	return (newdlst);
}
