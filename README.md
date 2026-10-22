# Libft — Custom C Standard Library

A static C library that reimplements a selection of standard C library functions, adds a set of string and output utilities, and provides a small linked-list API. Built as part of the 1337 / 42 Network curriculum.

## Table of Contents

- [About the Project](#about-the-project)
- [Learning Objectives](#learning-objectives)
- [Implemented Functions](#implemented-functions)
- [Project Structure](#project-structure)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Usage Example](#usage-example)
- [Testing](#testing)
- [What I Learned](#what-i-learned)
- [Author](#author)

## About the Project

Libft is usually the first project in the 42 curriculum. The goal is to write your own C library from scratch, without relying on the standard library for the functions being reimplemented, and to reuse it in later projects.

This repository builds a single static library, `libft.a`, from the source files listed in the `Makefile`. The public interface is declared in `libft.h`.

The library covers three areas:

- **Libc reimplementations** — functions that mirror standard C behavior (`ft_strlen`, `ft_memcpy`, `ft_atoi`, and others).
- **Additional utilities** — functions that are not in libc or are not standard, such as `ft_split`, `ft_itoa`, and `ft_strtrim`.
- **Linked lists** — a `t_list` type with functions to create, extend, traverse, and free lists.

## Learning Objectives

Concepts this project covers, based on what the header and Makefile contain:

- **C fundamentals** — function prototypes, headers and include guards, `struct` and `typedef`.
- **Pointers and memory** — byte-level manipulation with `void *`, and the overlap behavior that distinguishes `memcpy` from `memmove`.
- **Dynamic allocation** — `malloc` / `free` in functions that return newly allocated memory (`ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, `ft_calloc`, and the list functions).
- **String manipulation** — searching, comparing, copying, trimming, splitting, and mapping over strings.
- **Function pointers** — used by `ft_strmapi`, `ft_striteri`, and the `ft_lstiter` / `ft_lstmap` / `ft_lstdelone` / `ft_lstclear` family.
- **Linked lists** — a singly linked list built on `t_list`.
- **Static libraries and Makefiles** — compiling to object files and archiving them into `libft.a` with `ar`.
- **Edge cases** — empty strings, zero-length sizes, and `NULL` inputs are a central concern of this project; see [Testing](#testing) for how to check them.

## Implemented Functions

Every function below is declared in `libft.h` and has a corresponding `.c` file that is compiled by the `Makefile`.

### Character checks and conversions

| Function | Description |
| --- | --- |
| `ft_isalpha` | Checks for an alphabetic character |
| `ft_isdigit` | Checks for a decimal digit |
| `ft_isalnum` | Checks for an alphanumeric character |
| `ft_isascii` | Checks whether a value is in the ASCII range |
| `ft_isprint` | Checks for a printable character |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

### String manipulation

| Function | Description |
| --- | --- |
| `ft_strlen` | Returns the length of a string |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strchr` | Finds the first occurrence of a character |
| `ft_strrchr` | Finds the last occurrence of a character |
| `ft_strncmp` | Compares up to `n` characters of two strings |
| `ft_strnstr` | Finds a substring within the first `len` characters |
| `ft_strdup` | Returns a newly allocated copy of a string |

### Memory manipulation

| Function | Description |
| --- | --- |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeroes a block of memory |
| `ft_memcpy` | Copies memory (areas must not overlap) |
| `ft_memmove` | Copies memory (areas may overlap) |
| `ft_memchr` | Finds a byte in a memory block |
| `ft_memcmp` | Compares two memory blocks |
| `ft_calloc` | Allocates zero-initialized memory |

### String-to-integer conversion

| Function | Description |
| --- | --- |
| `ft_atoi` | Converts a string to an `int` |

### Output functions

| Function | Description |
| --- | --- |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Additional utility functions

| Function | Description |
| --- | --- |
| `ft_substr` | Returns a substring of a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims a set of characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter into a `NULL`-terminated array |
| `ft_itoa` | Converts an `int` to a string |
| `ft_strmapi` | Applies a function to each character and returns a new string |
| `ft_striteri` | Applies a function to each character in place |

### Linked-list functions

The list node type is defined in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
| --- | --- |
| `ft_lstnew` | Creates a new node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstsize` | Counts the nodes in the list |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Frees one node, using a deletion function on its content |
| `ft_lstclear` | Frees an entire list |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Builds a new list by applying a function to each node's content |

> **Note:** There is no separate `bonus` target. The linked-list functions are part of the default build.

## Project Structure

```text
Libft-1337/
├── .vscode/
├── Makefile
├── README.md
├── libft.h
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_itoa.c
├── ft_lstadd_back.c
├── ft_lstadd_front.c
├── ft_lstclear.c
├── ft_lstdelone.c
├── ft_lstiter.c
├── ft_lstlast.c
├── ft_lstmap.c
├── ft_lstnew.c
├── ft_lstsize.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
├── ft_split.c
├── ft_strchr.c
├── ft_strdup.c
├── ft_striteri.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_tolower.c
└── ft_toupper.c
```

Running `make` also produces `*.o` object files and `libft.a` in the repository root.

## Requirements

- A C compiler invoked as `cc` (GCC or Clang)
- `make`
- `ar` (part of binutils)
- A Unix-like environment (Linux or macOS)

The Makefile compiles with `-Wall -Wextra -Werror`, so any warning stops the build.

## Compilation

Targets defined in the `Makefile`:

| Command | Effect |
| --- | --- |
| `make` / `make all` | Compiles every source file and creates `libft.a` |
| `make clean` | Removes the object files (`*.o`) |
| `make fclean` | Removes the object files and `libft.a` |
| `make re` | Runs `fclean`, then rebuilds everything |

```bash
git clone https://github.com/p5ych016/Libft-1337.git
cd Libft-1337
make
```

Object files are rebuilt when their `.c` file or `libft.h` changes.

## Usage Example

Create a file named `main.c` in the repository root:

```c
#include "libft.h"

int	main(void)
{
	char	*greeting;
	char	*number;

	greeting = ft_strjoin("Hello, ", "42!");
	number = ft_itoa(1337);
	if (!greeting || !number)
		return (1);
	ft_putendl_fd(greeting, 1);
	ft_putendl_fd(number, 1);
	free(greeting);
	free(number);
	return (0);
}
```

Build the library, then compile and link the program against it:

```bash
make
cc -Wall -Wextra -Werror main.c -L. -lft -o demo
./demo
```

Expected output:

```text
Hello, 42!
1337
```

`ft_strjoin` and `ft_itoa` return heap-allocated strings, so the caller must `free` them.
