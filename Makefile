# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 10:39:45 by dpoveda-          #+#    #+#              #
#    Updated: 2021/09/17 20:45:07 by dpoveda-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

ARFLAGS = -rcs

SRCS =	ft_islower.c	ft_isupper.c	ft_isspace.c	ft_isalpha.c	\
		ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
		ft_tolower.c	ft_toupper.c	ft_strlen.c		ft_strcpy.c		\
		ft_strlcpy.c	ft_strcat.c		ft_strlcat.c	ft_strchr.c		\
		ft_strrchr.c	ft_strncmp.c	ft_strnstr.c	ft_strdup.c		\
		ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_split.c		\
		ft_strmapi.c	ft_striteri.c	ft_memset.c		ft_bzero.c		\
		ft_memcpy.c		ft_memmove.c	ft_memchr.c		ft_memcmp.c		\
		ft_atoi.c		ft_itoa.c		ft_calloc.c		ft_putchar_fd.c	\
		ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c

OBJS = $(SRCS:%.c=%.o)

SRCS_BONUS =	ft_lstnew_bonus.c		ft_lstadd_front_bonus.c	\
				ft_lstadd_back_bonus.c	ft_lstsize_bonus.c		\
				ft_lstlast_bonus.c		ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c		ft_lstiter_bonus.c		\
				ft_lstmap_bonus.c

OBJS_BONUS = $(SRCS_BONUS:%.c=%.o)

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $^

bonus: $(OBJS_BONUS)
	ar $(ARFLAGS) $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
