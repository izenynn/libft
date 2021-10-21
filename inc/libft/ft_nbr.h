/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:31:19 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 18:31:23 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NBR_H
# define FT_NBR_H

// int
int		ft_intlen(int n);
int		ft_intlen_base(int n, int base_len);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_atoi_base(const char *str, const char *base);
char	*ft_itoa_base(int n, const char *base);
char	*ft_convert_base(char *c, char *base_from, char *base_to);

// unsigned int
int		ft_uintlen(unsigned int n);
int		ft_uintlen_base(unsigned int n, int base_len);

// unsigned long
int		ft_ulonglen(unsigned long n);
int		ft_ulonglen_base(unsigned long n, int base_len);

#endif
