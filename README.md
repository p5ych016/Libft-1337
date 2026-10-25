
*This project has been created as part of the 42 curriculum by ayouikan.*

# Libft

## Description

Libft is a project that consists of recreating several standard C library functions from scratch.

The main goal is to gain a deeper understanding of how these functions work internally, rather than using them without knowing how they are implemented. By rebuilding them, I improved my understanding of C programming, memory management, and problem-solving.

The result is my own C library, which can be reused in future projects.

### Library Overview

The library is divided into three parts:

- **Part 1 — Libc functions:** Reimplementations of standard C functions, including `ft_strlen`, `ft_memcpy`, `ft_atoi`, and `ft_calloc`. They cover string manipulation, memory operations, and character handling.
- **Part 2 — Additional functions:** Utilities such as `ft_substr`, `ft_strjoin`, `ft_split`, and `ft_itoa` for working with strings and memory.
- **Bonus — Linked lists:** Functions for creating nodes, adding or removing elements, iterating through singly linked lists, and managing allocated memory.

## Instructions

### Compilation

From the project directory, run:

```bash
make
```

This compiles the source files and creates the static library `libft.a`.

### Makefile commands

| Command | Description |
| --- | --- |
| `make` | Builds `libft.a`. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Rebuilds the library from scratch. |

### Usage

Include the library header in your C source file:

```c
#include "libft.h"
```

If `main.c`, `libft.h`, and the compiled `libft.a` are in the same directory, compile and link with:

```bash
cc main.c libft.a -o program
./program
```

## Resources

### Learning resources

- **Manual pages (`man 3`):** To understand the behavior, parameters, and return values of standard C functions.
- **[GeeksforGeeks](https://www.geeksforgeeks.org/):** To read articles about programming concepts.
- **YouTube:** To watch tutorials and understand difficult concepts.
- **42 peers:** To discuss problems, exchange knowledge, and learn from other students.
- **Educational articles and websites:** To explore different explanations and approaches.

### AI usage

I used AI as an additional learning resource when I encountered difficulties that I could not resolve on my own or with the help of my peers.
