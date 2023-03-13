/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:41:47 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 17:21:39 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_lst.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*prev;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->data);
		prev = *lst;
		*lst = (*lst)->next;
		free(prev);
	}
	*lst = NULL;
}
