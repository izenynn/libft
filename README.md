# 42 Cursus - libft

## Info

My implementation of some useful C functions and some additional ones to use it in future projects of 42.

- Status: still updating (I use libft a lot so I keep improving it)
- Result: 125%
- Observations: (null)

## How to install and use

- Clone libft into your project folder

```sh
git clone https://github.com/izenynn/libft.git
```

- Run make inside libft folder (make rules: all, clean, fclean, re)

```sh
make
```

- Include libft.h in the header of your C file

```c
#include <libft.h>
```

- Or include only the part that you are going to use (list of functions below)

```c
#include <libft/ft_char.h>
#include <libft/ft_str.h>
#include <libft/ft_mem.h>
#include <libft/ft_nbr.h>
#include <libft/ft_fd.h>
#include <libft/ft_lst.h>
#include <libft/ft_dlst.h>
#include <libft/ft_printf.h>
```

## How to compile with libft

### Compile directly your .c files

- Just make sure you add libft (`libft.a`) and you specify `libft.h` path (`-I` flag) when you compile

```sh
gcc (...)(.c files) -o (output file) ./libft/libft.a -I ./libft/inc
```

###  Compile objects (`.o`) (for Makefiles)

- If you want to compile firts your .c files into `.o`, you will need to specify the `-c` flag (no linking) when compiling to `.o` files, and indicate the `libft.h` path with the `-I` flag

```sh
gcc -c (.c file) -o (.o output file) -I ./libft/inc
```

- Now we will compile all the `.o` into a program, and do the linking part with `-L` and `-l`, just specify the `libft.a` path with the `-L` flag

```sh
gcc (...)(.o files) -o (output file) -I ./libft/inc -L ./libft -lft
```

- ✨ Magic ✨

## List of functions

### ft_char
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

### ft_str
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

### ft_mem
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

### ft_nbr
- ft_atoi
- ft_itoa
- ft_intlen
- ft_intlen_base
- ft_uintlen
- ft_uintlen_base
- ft_ulonglen
- ft_ulonglen_base

### ft_fd
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
- ft_get_next_line

### ft_lst
- ft_lstnew
- ft_lstadd_front
- ft_lstadd_back
- ft_lstsize
- ft_lstlast
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

### ft_dlst
- ft_dlstnew
- ft_dlstadd_front
- ft_dlstadd_back
- ft_dlstsize
- ft_dlstfirst
- ft_dlstlast
- ft_dlstdelone
- ft_dlstclear
- ft_dlstiter
- ft_dlstmap

### ft_printf
- ft_printf

## ft_printf flags

- `%c` print a single character.
- `%s` print a string of characters.
- `%p` the void * pointer argument is printed in hexadecimal.
- `%d` print a decimal (base 10) number.
- `%i` print an integer in base 10.
- `%u` print an unsigned decimal (base 10) number
- `%x` print a number in hexadecimal (base 16) with lowercase.
- `%X` print a number in hexadecimal (base 16) with uppercase.
- `%%` print a percent sign.
- `-` left-justify within the given field width; Right justification is the default.
- `0` left-pads the number with zeroes (0) instead of spaces when padding is specified.
- `.` the precision in not specified in the format string, but as an additional integer value argument preceding the argument that has to be formated.
- `#` used with x or X specifiers the value is preceeded with 0x or 0X respectively for the values different than zero.
- `(space)` if no sign is going to be written, a blank space is inserted before the value.
- `+` forces to preceed the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a - sign.

##
[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)
