/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fd.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:54:51 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 17:14:27 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FD_H
# define FT_FD_H

// put fd
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putendl_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
void	*ft_putmem_fd(void *addr, unsigned int size, int fd);

// ft_get_next_line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

# ifndef FD_SIZE
#  define FD_SIZE 1
# endif

char	*ft_get_next_line(int fd);

#endif
