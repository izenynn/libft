/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 00:18:58 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/10/21 00:18:59 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_char.h>
#include <libft/ft_str.h>

static int	get_base_index(char c, const char *base)
{
	int	cnt;

	cnt = 0;
	while (*base && *base != c && ++cnt)
		base++;
	return (cnt);
}

static int	str_to_int(const char *n, const char *base, long int pow, int base_l)
{
	int	ret;

	ret = 0;
	while (*n)
	{
		ret += get_base_index(*n, base) * pow;
		pow /= base_l;
		n++;
	}
	return (ret);
}

static int	get_base_len(const char *base)
{
	int	base_l;

	base_l = 0;
	while (base[base_l])
	{
		if (ft_strchr(&base[base_l + 1], base[base_l]))
			return (0);
		base_l++;
	}
	return (base_l);
}

int	ft_atoi_base(const char *str, const char *base)
{
	char			*save;
	int				base_l;
	long int		pow;

	pow = 1;
	base_l = get_base_len(base);
	if (base_l < 2)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '-' && str++)
		pow = -1;
	else if (*str == '+')
		str++;
	save = (char *)str;
	while (*str && ft_strchr(base, *str))
	{
		pow *= base_l;
		str++;
	}
	pow /= base_l;
	return (str_to_int(save, base, pow, base_l));
}
