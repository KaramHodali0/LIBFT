*This activity has been created as part of the 42 curriculum by kalhouda.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 curriculum.

The goal of this project is to recreate a collection of commonly used functions from the C standard library while learning how they work internally and how to implement them safely from scratch.

The library contains functions for:

* Character classification and conversion
* String manipulation
* Memory manipulation
* Conversion between strings and integers
* Dynamic memory allocation
* File-descriptor output
* Linked-list manipulation

The project is divided into several parts, starting with basic functions and progressively introducing more complex concepts such as dynamic memory allocation, function pointers, and linked lists.

The final result is a static library named:

```text
libft.a
```

This library can then be linked to other C projects and used as a personal collection of reusable C functions.

## Library Contents

### Character Functions

The following functions work with individual characters:

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`

### String Functions

The library provides several functions for manipulating C strings:

* `ft_strlen`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strnstr`
* `ft_strdup`
* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`

### Memory Functions

Functions for working directly with memory:

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

### Conversion Functions

* `ft_atoi`
* `ft_itoa`

`ft_atoi` converts a string into an integer, while `ft_itoa` performs the opposite operation by converting an integer into a newly allocated string.

### File Descriptor Functions

These functions write data to a specified file descriptor:

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Linked-List Functions

Libft also contains a singly linked-list implementation based on the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

The linked-list functions are:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

The linked-list part introduces important C concepts such as structures, pointers to structures, `void *`, function pointers, dynamic memory management, and linked data structures.

## Instructions

### Requirements

A C compiler and `make` are required.

The project is compiled using:

```text
-Wall -Wextra -Werror
```

### Compilation

Clone the repository and enter the project directory:

```bash
git clone git@github.com:KaramHodali0/LIBFT.git
cd LIBFT
```

Build the library with:

```bash
make
```

This creates:

```text
libft.a
```

### Makefile Commands

Build the library:

```bash
make
```

or:

```bash
make all
```

Remove object files:

```bash
make clean
```

Remove object files and the compiled library:

```bash
make fclean
```

Recompile everything from scratch:

```bash
make re
```

The Makefile is designed to avoid unnecessary relinking and compiles the required source files into object files before creating the static library.

### Using Libft in Another Project

Include the library header:

```c
#include "libft.h"
```

Compile your program together with `libft.a`:

```bash
cc main.c -L. -lft -o program
```

Then execute it:

```bash
./program
```

## Technical Choices

The project follows the restrictions and requirements of the 42 Libft subject.

Important implementation choices include:

* No global variables are used.
* Helper functions are kept `static` when appropriate.
* Dynamic memory is handled using `malloc` and `free`.
* Functions are implemented without directly using the corresponding standard-library implementation.
* The linked-list functions use the `t_list` structure required by the project.
* The library is compiled into a static archive named `libft.a`.
* Compilation uses `-Wall -Wextra -Werror`.
* The code is written to comply with the 42 coding standards and Norminette requirements.

Special attention is given to edge cases such as:

* Empty strings
* `NULL` pointers where the subject permits them
* Zero-length allocations
* Overlapping memory regions in `ft_memmove`
* `INT_MIN` in `ft_itoa`
* Allocation failures
* Empty lists
* Single-node linked lists
* Properly freeing allocated memory

## Resources

### C Standard Library

The main reference used to understand the behavior of the standard functions recreated in this project was:

**The Standard C Library — P. J. Plauger**

This reference was used to better understand the intended behavior and implementation concepts behind standard C library functions.

### Manual Pages

The Unix manual pages were used to verify function behavior, parameters, return values, and edge cases:

```bash
man strlen
man memset
man memcpy
man memmove
man strchr
man strcmp
man strdup
man calloc
man atoi
```

For functions with similar behavior to standard library functions, their manual pages were used as behavioral references rather than as implementations.

### C Documentation

Additional C documentation and references were used to understand:

* Pointers
* Structures
* Dynamic memory allocation
* Function pointers
* String manipulation
* Memory manipulation
* File descriptors
* Static libraries
* Makefiles

### 42 Documentation

The official 42 Libft subject and project requirements were used as the primary specification for:

* Required functions
* Function prototypes
* Compilation requirements
* Makefile requirements
* Memory-management behavior
* Linked-list requirements
* Norminette constraints

### AI Usage

AI tools were used as a **learning and debugging assistant** during the project.

AI was used for:

* Explaining C concepts such as pointers, `void *`, structures, `typedef`, function pointers, `size_t`, and dynamic memory allocation.
* Explaining the behavior and purpose of individual Libft functions.
* Discussing edge cases and possible memory-management problems.
* Helping interpret compiler errors, segmentation faults, and Valgrind reports.
* Reviewing implementations and pointing out potential bugs.
* Creating example test cases to help verify function behavior.
* Explaining Makefiles and static libraries.
* Guiding the implementation process when encountering unfamiliar concepts.

The code was developed and understood through the student's own work. AI explanations were used as a supplementary learning resource rather than as a replacement for understanding the implementation.

## Project Structure

The repository contains the source files, header file, and Makefile at its root:

```text
LIBFT/
├── Makefile
├── libft.h
├── ft_*.c
└── README.md
```

After compilation, object files and the static library are generated according to the Makefile rules.

## Goal of the Project

The main goal of Libft is not simply to reproduce existing library functions.

The project is intended to develop a deeper understanding of C programming by implementing commonly used functionality from scratch.

Through this project, the main concepts practiced include:

* Pointer manipulation
* Memory management
* String handling
* Arrays
* Structures
* Linked lists
* Function pointers
* Dynamic allocation
* File descriptors
* Static libraries
* Makefiles
* Debugging and testing
* Defensive programming

Libft therefore serves as a reusable C library as well as a foundation for future 42 projects.
