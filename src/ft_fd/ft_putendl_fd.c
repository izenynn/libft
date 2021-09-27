/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:43:36 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 13:22:31 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_fd.h>

int	ft_putendl_fd(char *s, int fd)
{
	int	cnt;

	if (!s)
		return (0);
	cnt = 0;
	cnt += ft_putstr_fd(s, fd);
	cnt += ft_putchar_fd('\n', fd);
	return (cnt);
}
