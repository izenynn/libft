/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:31:44 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/10/05 13:05:00 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

void	ft_dlstclear(t_dlist **dlst, void (*del)(void *))
{
	void	*prev;

	if (!dlst || !del)
		return ;
	while (*dlst)
	{
		del((*dlst)->content);
		prev = *dlst;
		*dlst = (*dlst)->next;
		free(prev);
	}
	*dlst = NULL;
}
