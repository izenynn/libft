/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:34:36 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 19:54:17 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_dlst.h"

int	ft_dlstsize(t_dlist *dlst)
{
	int	len;

	if (!dlst)
		return (0);
	len = 0;
	while (dlst && ++len)
		dlst = dlst->next;
	return (len);
}
