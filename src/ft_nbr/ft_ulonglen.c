/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulonglen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 11:55:53 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/26 11:56:09 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ulonglen(unsigned long n)
{
	int	cnt;

	cnt = 1;
	while (n > 9)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}
