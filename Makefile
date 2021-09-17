# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 10:39:45 by dpoveda-          #+#    #+#              #
#    Updated: 2021/09/17 11:55:54 by dpoveda-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

ARFLAGS = -rcs

SRCDIR = src
OBJDIR = obj

SRCS_NAME =	ft_islower.c	ft_isupper.c	ft_isspace.c	ft_isalpha.c	\
			ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
			ft_tolower.c	ft_toupper.c	ft_strlen.c		ft_strcpy.c		\
			ft_strlcpy.c	ft_strcat.c		ft_strlcat.c	ft_strchr.c		\
			ft_strrchr.c	ft_strncmp.c	ft_strnstr.c	ft_strdup.c		\
			ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_split.c		\
			ft_strmapi.c	ft_striteri.c	ft_memset.c		ft_bzero.c		\
			ft_memcpy.c		ft_memmove.c	ft_memchr.c		ft_memcmp.c		\
			ft_atoi.c		ft_itoa.c		ft_calloc.c		ft_putchar_fd.c	\
			ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c

SRCS = $(addprefix $(SRCDIR)/, $(SRCS_NAME))
OBJS_NAME = $(SRCS_NAME:%.c=%.o)
OBJS = $(addprefix $(OBJDIR)/, $(OBJS_NAME))

SRCS_BONUS_NAME =	ft_lstnew.c		ft_lstadd_front.c	ft_lstadd_back.c	\
					ft_lstsize.c	ft_lstlast.c		ft_lstdelone.c		\
					ft_lstclear.c	ft_lstiter.c		ft_lstmap.c

SRCS_BONUS = $(addprefix $(SRCDIR)/, $(SRCS_BONUS_NAME))
OBJS_BONUS_NAME = $(SRCS_BONUS_NAME:%.c=%.o)
OBJS_BONUS = $(addprefix $(OBJDIR)/, $(OBJS_BONUS_NAME))

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@ar $(ARFLAGS) $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -I. -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR) 2> /dev/null

bonus: $(OBJS) $(OBJS_BONUS)
	@ar $(ARFLAGS) $(NAME) $^

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
