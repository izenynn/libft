# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 10:39:45 by dpoveda-          #+#    #+#              #
#    Updated: 2021/09/28 15:35:47 by dpoveda-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILE
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs

# PATHS
INCS_PATH = inc
SRCS_PATH = src
OBJS_PATH = obj

# SRCS DIR
SRCS_CHAR_DIR = ft_char
SRCS_STR_DIR = ft_str
SRCS_MEM_DIR = ft_mem
SRCS_NBR_DIR = ft_nbr
SRCS_FD_DIR = ft_fd
SRCS_LST_DIR = ft_lst
SRCS_DLST_DIR = ft_dlst
SRCS_PRINTF_DIR = ft_printf

# OBJS DIR
OBJS_DIRS_NAME =	$(SRCS_CHAR_DIR)	$(SRCS_STR_DIR)		$(SRCS_MEM_DIR)	\
					$(SRCS_NBR_DIR)		$(SRCS_FD_DIR)		$(SRCS_LST_DIR)	\
					$(SRCS_DLST_DIR)	$(SRCS_PRINTF_DIR)

OBJS_DIRS = $(addprefix $(OBJS_PATH)/, $(OBJS_DIRS_NAME))

# SRC FILES
SRCS_CHAR =	ft_islower.c	ft_isupper.c	ft_isspace.c	ft_isalpha.c	\
			ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
			ft_tolower.c	ft_toupper.c

SRCS_STR =	ft_strlen.c		ft_strcpy.c		ft_strlcpy.c	ft_strcat.c		\
			ft_strlcat.c	ft_strchr.c		ft_strrchr.c	ft_strncmp.c	\
			ft_strnstr.c	ft_strdup.c		ft_substr.c		ft_strjoin.c	\
			ft_strtrim.c	ft_split.c		ft_strmapi.c	ft_striteri.c
SRCS_MEM =	ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c	\
			ft_memchr.c		ft_memcmp.c		ft_calloc.c

SRCS_NBR =	ft_atoi.c			ft_itoa.c				ft_intlen.c			\
			ft_intlen_base.c	ft_atoi.c				ft_uintlen.c		\
			ft_uintlen_base.c		ft_ulonglen.c		ft_ulonglen_base.c

SRCS_FD =	ft_putchar_fd.c		ft_putstr_fd.c		ft_putendl_fd.c			\
			ft_putnbr_fd.c		ft_get_next_line.c

SRCS_LST =	ft_lstnew.c			ft_lstadd_front.c		ft_lstsize.c		\
			ft_lstlast.c		ft_lstadd_back.c		ft_lstdelone.c		\
			ft_lstclear.c		ft_lstiter.c			ft_lstmap.c

SRCS_DLST =	ft_dlstnew.c		ft_dlstadd_front.c		ft_dlstadd_back.c	\
			ft_dlstsize.c		ft_dlstfirst.c			ft_dlstlast.c		\
			ft_dlstdelone.c		ft_dlstclear.c			ft_dlstiter.c		\
			ft_dlstmap.c

SRCS_PRINTF =	ft_printf.c		ft_printf_tab_utils.c	ft_printf_char.c	\
				ft_printf_str.c	ft_printf_int.c			ft_printf_uint.c	\
				ft_printf_ptr.c	ft_printf_hex.c

SRCS_NAME =	$(addprefix $(SRCS_CHAR_DIR)/, $(SRCS_CHAR))	\
			$(addprefix $(SRCS_STR_DIR)/, $(SRCS_STR))		\
			$(addprefix $(SRCS_MEM_DIR)/, $(SRCS_MEM))		\
			$(addprefix $(SRCS_NBR_DIR)/, $(SRCS_NBR))		\
			$(addprefix $(SRCS_FD_DIR)/, $(SRCS_FD))		\
			$(addprefix $(SRCS_LST_DIR)/, $(SRCS_LST))		\
			$(addprefix $(SRCS_DLST_DIR)/, $(SRCS_DLST))	\
			$(addprefix $(SRCS_PRINTF_DIR)/, $(SRCS_PRINTF))

OBJS_NAME = $(SRCS_NAME:%.c=%.o)

SRCS = $(addprefix $(SRCS_PATH)/, $(SRCS_NAME));
OBJS = $(addprefix $(OBJS_PATH)/, $(OBJS_NAME));

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $^

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c | $(OBJS_DIRS)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS_PATH)

$(OBJS_DIRS): | $(OBJS_PATH)
	mkdir -p $(OBJS_DIRS) 2> /dev/null

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH) 2> /dev/null

clean:
	rm -rf $(OBJS_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all
