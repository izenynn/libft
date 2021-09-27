# 42 Cursus - libft

## Info

My implementation of some useful C functions and some additional ones to use it in future projects of 42.

## How to use

- Clone libft to your project

```sh
git clone https://github.com/izenynn/libft.git
```

- Run make inside libft folder (make rules: all, clean, fclean, re)

```sh
make
```

- Include libft.h in the header of your C file or files

```c
#include <libft.h>
```

- Make sure you add libft.a and you specify libft.h path (-I flag) when you compile

```sh
gcc example.c libft/libft.a -I libft/inc/
```

## List of functions included

### char
- ft_islower
- ft_isupper
- ft_isspace
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_tolower
- ft_toupper

### strings
- ft_strlen
- ft_strcpy
- ft_strlcpy
- ft_strcat
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi
- ft_striteri

### memory
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

### int
- ft_atoi
- ft_itoa
- ft_intlen
- ft_intlen_base

### unsigned int
- ft_uintlen
- ft_uintlen_base

### unsigned long
- ft_ulonglen
- ft_ulonglen_base

### fd
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### linked list
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

### printf
- ft_printf
