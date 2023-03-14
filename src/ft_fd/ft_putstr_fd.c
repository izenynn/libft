/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:44:33 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 19:36:40 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft/ft_str.h"

int	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return (0);
	return ((int)write(fd, s, ft_strlen(s)));
}
