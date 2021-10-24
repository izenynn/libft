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
| Function | Description | Prototype |
| --- | --- | --- |
| [ft_islower](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_islower.c) | return 0 or 1, is `c` a lower case letter? | `int ft_islower(int c)` |
| [ft_isupper](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_isupper.c) | return 0 or 1, is `c` a upper case letter? | `int ft_isupper(int c)` |
| [ft_isspace](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_isspace.c) | return 0 or 1, is `c` a space character? | `int ft_isspace(int c)` |
| [ft_isalpha](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_isalpha.c) | return 0 or 1, is `c` a letter? | `int ft_isalpha(int c)` |
| [ft_isdigit](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_isdigit.c) | return 0 or 1, is `c` a digit? | `int ft_isdigit(int c)` |
| [ft_isalnum](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_isalnum.c) | return 0 or 1, is `c` a letter or digit? | `int ft_isalnum(int c)` |
| [ft_isascii](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_isascii.c) | return 0 or 1, is `c` an ascii character? | `int ft_isascii(int c)` |
| [ft_isprint](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_isprint.c) | return 0 or 1, is `c` a printable character? | `int ft_isprint(int c)` |
| [ft_tolower](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_tolower.c) | return `c` in lower case | `int ft_tolower(int c)` |
| [ft_toupper](https://github.com/izenynn/libft/blob/main/src/ft_char/ft_toupper.c) | return `c` in upper case | `int ft_toupper(int c)` |

### ft_str
| Function | Description | Prototype |
| --- | --- | --- |
| [ft_strlen](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strlen.c) | return len of `s` | `size_t ft_strlen(const char *s)` |
| [ft_strcpy](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strcpy.c) | `man strcpy` | `char *ft_strcpy(char *dst, const char *src)` |
| [ft_strlcpy](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strlcpy.c) | `man strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)` |
| [ft_strcat](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strcat.c) | `man strcat` | `char *ft_strcat(char *s1, const char *s2)` |
| [ft_strlcat](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strlcat.c) | `man strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize)` |
| [ft_strchr](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strchr.c) | `man strchr` | `char *ft_strchr(const char *s, int c)` |
| [ft_strrchr](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strrchr.c) | `man strrchr` | `char *ft_strrchr(const char *s, int c)` |
| [ft_strncmp](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strncmp.c) | `man strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` |
| [ft_strnstr](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strnstr.c) | `man strnstr` | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` |
| [ft_strdup](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strdup.c) | `man strdup` | `char *ft_strdup(const char *s1)` |
| [ft_substr](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_substr.c) | return a sub string of `s` | `char *ft_substr(const char *s, unsigned int start, size_t len)` |
| [ft_strjoin](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strjoin.c) | returns a new string joining `s1` and `s2` | `char *ft_strjoin(const char *s1, const char *s2)` |
| [ft_strtrim](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strtrim.c) | returns a trimed str (triming `set` chars) | `char *ft_strtrim(const char *s1, const char *set)` |
| [ft_split](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_split.c) | splits a string using `c` as separator | `char **ft_split(const char *s1, const char *set)` |
| [ft_strmap](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strmap.c) | maps a new str iterating `s` with `f` | `char *ft_strmap(const char *s, char (*f)(char))` |
| [ft_strmapi](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strmapi.c) | maps a new str iterating `s` with `f` | `char *ft_strmapi(const char *s, char (*f)(unsigned int, char))` |
| [ft_striter](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_striter.c) | iterates `s` wiht `f` | `void ft_striter(char *s, void (*f)(char *))` |
| [ft_striteri](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_striteri.c) | iterates `s` wiht `f` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` |
| [ft_strrev](https://github.com/izenynn/libft/blob/main/src/ft_str/ft_strrev.c) | reverts a string | `char *ft_strrev(char *s)` |

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
- ft_atoi_base
- ft_itoa_base
- ft_convert_base
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
- ft_dprintf

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
