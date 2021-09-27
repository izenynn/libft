/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:32:11 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/09/27 14:56:35 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// headers
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// chars
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isspace(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

// strings
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strcat(char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

// memory
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);

// int
int		ft_intlen(int n);
int		ft_atoi(const char *str);

// unsigned int
int		ft_uintlen(unsigned int n);
int		ft_uintlen_base(unsigned int n, int base_len);

// unsigned long
int		ft_ulonglen(unsigned long n);
int		ft_ulonglen_base(unsigned long n, int base_len);

// put fd
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putendl_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);

// linked list
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// printf
typedef struct s_print
{
	va_list	args;
	int		wd;
	int		dot;
	int		dash;
	int		zero;
	int		sharp;
	int		sp;
	int		plus;
	int		tlen;
	int		sign;
	int		is_zero;
	int		perc;
}	t_print;

int		ft_printf(const char *format, ...);
t_print	*ft_initialise_tab(t_print *tab);
t_print	*ft_clear_flags_tab(t_print *tab);
void	ft_printf_char(t_print *tab);
void	ft_printf_str(t_print *tab);
void	ft_printf_int(t_print *tab);
void	ft_printf_uint(t_print *tab);
void	ft_printf_ptr(t_print *tab);
void	ft_printf_hex(t_print *tab, char flag);

#endif
