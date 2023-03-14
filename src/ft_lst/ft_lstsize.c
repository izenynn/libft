/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:42:25 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 19:53:55 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_lst.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (!lst)
		return (0);
	len = 0;
	while (lst && ++len)
		lst = lst->next;
	return (len);
}
