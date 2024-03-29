/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:32:43 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 17:17:41 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_dlst.h"

void	ft_dlstdelone(t_dlist *dlst, void (*del)(void *))
{
	if (!dlst || !del)
		return ;
	del(dlst->data);
	free(dlst);
}
