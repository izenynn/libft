# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 10:39:45 by dpoveda-          #+#    #+#              #
#    Updated: 2021/09/27 15:11:05 by dpoveda-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

ARFLAGS = -rcs

SRCS =	ft_islower.c			ft_isupper.c			ft_isspace.c		\
		ft_isalpha.c			ft_isdigit.c			ft_isalnum.c		\
		ft_isascii.c			ft_isprint.c			ft_tolower.c		\
		ft_toupper.c			ft_strlen.c				ft_strcpy.c			\
		ft_strlcpy.c			ft_strcat.c				ft_strlcat.c		\
		ft_strchr.c				ft_strrchr.c			ft_strncmp.c		\
		ft_strnstr.c			ft_strdup.c				ft_substr.c			\
		ft_strjoin.c			ft_strtrim.c			ft_split.c			\
		ft_strmapi.c			ft_striteri.c			ft_memset.c			\
		ft_bzero.c				ft_memcpy.c				ft_memmove.c		\
		ft_memchr.c				ft_memcmp.c				ft_atoi.c			\
		ft_itoa.c				ft_calloc.c				ft_putchar_fd.c		\
		ft_putstr_fd.c			ft_putendl_fd.c			ft_putnbr_fd.c		\
		ft_lstnew.c				ft_lstadd_front.c		ft_lstadd_back.c	\
		ft_lstsize.c			ft_lstlast.c			ft_lstdelone.c		\
		ft_lstclear.c			ft_lstiter.c			ft_lstmap.c			\
		ft_intlen.c				ft_intlen_base.c		ft_uintlen.c		\
		ft_ulonglen.c			ft_uintlen_base.c		ft_ulonglen_base.c	\
		ft_printf.c				ft_printf_tab.c			ft_printf_char.c	\
		ft_printf_str.c			ft_printf_int.c			ft_printf_uint.c	\
		ft_printf_ptr.c			ft_printf_hex.c			ft_get_next_line.c

OBJS = $(SRCS:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
