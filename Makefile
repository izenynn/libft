# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 10:39:45 by dpoveda-          #+#    #+#              #
#    Updated: 2023/03/14 19:46:41 by dpoveda-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                   PROGRAM                                    #
# **************************************************************************** #

NAME = libft.a

# **************************************************************************** #
#                                   COMPILER                                   #
# **************************************************************************** #

CC = gcc
CPPFLAGS = -MMD
CFLAGS = -Wall -Wextra -Werror -Wpedantic -Wshadow

AR = ar
ARFLAGS = -rcs

# **************************************************************************** #
#                                   BINARIES                                   #
# **************************************************************************** #

RM = rm -rf
MKDIR = mkdir -p

# **************************************************************************** #
#                                    PATHS                                     #
# **************************************************************************** #

INC_PATH = include
SRC_PATH = src
OBJ_PATH = build

# **************************************************************************** #
#                                   SOURCES                                    #
# **************************************************************************** #

# SRCS DIRS
SRC_CHAR_DIR = ft_char
SRC_STR_DIR = ft_str
SRC_MEM_DIR = ft_mem
SRC_NBR_DIR = ft_nbr
SRC_FD_DIR = ft_fd
SRC_LST_DIR = ft_lst
SRC_DLST_DIR = ft_dlst
SRC_PRINTF_DIR = ft_printf

# OBJS DIR
OBJ_DIRS_NAME =		$(SRC_CHAR_DIR)		$(SRC_STR_DIR)		$(SRC_MEM_DIR)	\
					$(SRC_NBR_DIR)		$(SRC_FD_DIR)		$(SRC_LST_DIR)	\
					$(SRC_DLST_DIR)		$(SRC_PRINTF_DIR)

# OBJS DIRS IN OBJ PATH
OBJ_DIRS = $(addprefix $(OBJ_PATH)/, $(OBJ_DIRS_NAME))

# SRC FILES
SRC_CHAR =	ft_islower.c	ft_isupper.c	ft_isspace.c	ft_isalpha.c	\
			ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
			ft_tolower.c	ft_toupper.c	ft_iscntrl.c	ft_isblank.c

SRC_STR =	ft_strlen.c		ft_strcpy.c		ft_strlcpy.c	ft_strcat.c		\
			ft_strlcat.c	ft_strchr.c		ft_strrchr.c	ft_strncmp.c	\
			ft_strnstr.c	ft_strdup.c		ft_substr.c		ft_strjoin.c	\
			ft_strtrim.c	ft_split.c		ft_strmapi.c	ft_striteri.c	\
			ft_strmap.c		ft_striter.c	ft_strrev.c

SRC_MEM =	ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c	\
			ft_memchr.c		ft_memcmp.c		ft_calloc.c		ft_realloc.c

SRC_NBR =	ft_atoi.c			ft_itoa.c				ft_intlen.c			\
			ft_intlen_base.c	ft_atoi.c				ft_uintlen.c		\
			ft_uintlen_base.c	ft_ulonglen.c			ft_ulonglen_base.c	\
			ft_atoi_base.c		ft_itoa_base.c			ft_convert_base.c

SRC_FD =	ft_putchar_fd.c		ft_putstr_fd.c			ft_putendl_fd.c		\
			ft_putnbr_fd.c		ft_putmem_fd.c			ft_get_next_line.c

SRC_LST =	ft_lstnew.c			ft_lstadd_front.c		ft_lstsize.c		\
			ft_lstlast.c		ft_lstadd_back.c		ft_lstdelone.c		\
			ft_lstclear.c		ft_lstiter.c			ft_lstmap.c

SRC_DLST =	ft_dlstnew.c		ft_dlstadd_front.c		ft_dlstadd_back.c	\
			ft_dlstsize.c		ft_dlstfirst.c			ft_dlstlast.c		\
			ft_dlstdelone.c		ft_dlstclear.c			ft_dlstiter.c		\
			ft_dlstmap.c

SRC_PRINTF =	ft_printf.c					ft_dprintf.c					\
				ft_handle_dprintf.c			ft_printf_tab_utils.c			\
				ft_printf_char.c			ft_printf_str.c					\
				ft_printf_int.c				ft_printf_uint.c				\
				ft_printf_ptr.c				ft_printf_hex.c

# SRC FILES AND SRCS DIRS
SRC_NAME =	$(addprefix $(SRC_CHAR_DIR)/,	$(SRC_CHAR))		\
			$(addprefix $(SRC_STR_DIR)/,	$(SRC_STR))			\
			$(addprefix $(SRC_MEM_DIR)/,	$(SRC_MEM))			\
			$(addprefix $(SRC_NBR_DIR)/,	$(SRC_NBR))			\
			$(addprefix $(SRC_FD_DIR)/,		$(SRC_FD))			\
			$(addprefix $(SRC_LST_DIR)/,	$(SRC_LST))			\
			$(addprefix $(SRC_DLST_DIR)/,	$(SRC_DLST))		\
			$(addprefix $(SRC_PRINTF_DIR)/,	$(SRC_PRINTF))

# OBJS NAME
OBJ_NAME = $(SRC_NAME:%.c=%.o)

# ADD PATH TO SRCS AND OBJS
SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME));
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME));
DEP = $(OBJ:%.o=%.d)

# **************************************************************************** #
#                                    FLAGS                                     #
# **************************************************************************** #

CFLAGS += -I./$(INC_PATH)

# **************************************************************************** #
#                                    RULES                                     #
# **************************************************************************** #

PHONY := all
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c | $(OBJ_DIRS)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

$(OBJ_DIRS): | $(OBJ_PATH)
	$(MKDIR) $(OBJ_DIRS)

$(OBJ_PATH):
	$(MKDIR) $(OBJ_PATH)

PHONY += clean
clean:
	$(RM) $(OBJ_PATH)

PHONY += fclean
fclean: clean
	$(RM) $(NAME)

PHONY += re
re: fclean all

-include $(DEP)

.PHONY: $(PHONY)
