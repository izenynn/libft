/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:33:29 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/10/04 16:34:06 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

void	ft_dlstiter(t_dlist *dlst, void (*f)(void *))
{
	if (!dlst || !f)
		return ;
	while (dlst)
	{
		f(dlst->content);
		dlst = dlst->next;
	}
}
