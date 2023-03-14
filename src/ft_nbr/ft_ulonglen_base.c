/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulonglen_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:54:06 by dpoveda-          #+#    #+#             */
/*   Updated: 2023/03/13 18:28:22 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ulonglen_base(unsigned long n, int base_len)
{
	int	cnt;

	cnt = 1;
	while (n >= (unsigned long)base_len)
	{
		n /= (unsigned long)base_len;
		cnt++;
	}
	return (cnt);
}
