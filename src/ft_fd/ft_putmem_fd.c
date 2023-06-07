/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:57:48 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/06/29 01:13:04 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_puthexa(unsigned char c, int fd)
{
	int	n1;
	int	n2;

	n1 = c / 16;
	n2 = c % 16;
	if (n1 < 10)
		n1 += '0';
	else
		n1 += 'W';
	ft_putchar(n1, fd);
	if (n2 < 10)
		n2 += '0';
	else
		n2 += 'W';
	ft_putchar(n2, fd);
}

void	ft_putaddr(void *addr, int fd)
{
	int		i;
	char	addr_c[16];
	long	addr_l;

	addr_l = (long)addr;
	i = 0;
	while (addr_l > 0)
	{
		addr_c[i] = addr_l % 16;
		addr_l /= 16;
		i++;
	}
	while (i < 16)
		addr_c[i++] = 0;
	while (--i >= 0)
	{
		if (addr_c[i] < 10)
			ft_putchar(addr_c[i] + '0', fd);
		else
			ft_putchar(addr_c[i] + 'W', fd);
	}
}

void	ft_putdata(void *addr, int c_to_print, int fd)
{
	int		i;
	int		sp_to_print;
	char	*addr_c;

	addr_c = (char *)addr;
	i = 0;
	while (i < c_to_print)
	{
		ft_puthexa((unsigned char)addr_c[i++], fd);
		if (i % 2 == 0)
			ft_putchar(' ', fd);
	}
	sp_to_print = (16 - c_to_print) * 2 + (17 - c_to_print) / 2;
	while (sp_to_print-- > 0)
		ft_putchar(' ', fd);
	i = 0;
	while (i < c_to_print)
	{
		if (addr_c[i] >= 32 && addr_c[i] <= 126)
			ft_putchar(addr_c[i], fd);
		else
			ft_putchar('.', fd);
		i++;
	}
}

void	*ft_putmem_fd(void *addr, unsigned int size, int fd)
{
	unsigned int	c_to_print;
	unsigned int	offset;

	offset = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			c_to_print = 16;
			size -= 16;
		}
		else
		{
			c_to_print = size;
			size = 0;
		}
		ft_putaddr((char *)addr + offset, fd);
		ft_putchar(':', fd);
		ft_putchar(' ', fd);
		ft_putdata((char *)addr + offset, c_to_print, fd);
		ft_putchar('\n', fd);
		offset += 16;
	}
	return (addr);
}
