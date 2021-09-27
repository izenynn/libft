/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:53:56 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 15:03:23 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_uintlen_base(unsigned int n, int base_len)
{
	int	cnt;

	cnt = 1;
	while (n >= (unsigned int)base_len)
	{
		n /= (unsigned int)base_len;
		cnt++;
	}
	return (cnt);
}
