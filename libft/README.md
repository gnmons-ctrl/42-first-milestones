*This project has been created as part of the 42 curriculum by <nlovius>.*

# Libft - Your First C Library

## Description
The **Libft** project is a foundational assignment in the 42 curriculum. The goal is to create a personal library of standard C functions that will be used throughout future projects in the program. By recoding functions from the standard C library (libc) as well as additional utility functions, this project provides a deep understanding of memory management, string manipulation, and the underlying behavior of the C programming language.

The library acts as a static archive (`.a`) that can be linked to other C projects, providing a reliable and tested set of tools for development.

## Library Overview
The library is composed of three main parts:

1.  **Libc Functions:** Re-implementations of standard functions like `strlen`, `memcpy`, `atoi`, and `strdup`.
2.  **Additional Functions:** Utility functions that are not in the standard libc but are highly useful, such as `ft_split`, `ft_strjoin`, and `ft_itoa`.
3.  **Bonus Functions:** A set of functions designed to manipulate linked lists using a custom structure defined in the header.

### Detailed Function List

| Category | Functions |
| :--- | :--- |
| **Character Check/Conversion** | `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower` |
| **String Manipulation** | `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup` |
| **Memory Management** | `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc` |
| **Non-Standard Utilities** | `substr`, `strjoin`, `strtrim`, `split`, `itoa`, `strmapi`, `striteri` |
| **Output (File Descriptors)** | `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd` |
| **Linked Lists (Bonus)** | `lstnew`, `lstadd_front`, `lstsize`, `lstlast`, `lstadd_back`, `lstdelone`, `lstclear`, `lstiter`, `lstmap` |

## Instructions

### Compilation
The project includes a `Makefile` that follows the standard rules. To compile the library, run the following command in the root of the repository:

```bash
make
```

### Usage
To use the library in your own project, include the header in your C files and link the `libft.a` file during compilation:

1. Include the header:
   ```c
   #include "libft.h"
   ```
2. Compile your program with the library:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
   ```

### Cleaning Up
* To remove object files: `make clean`
* To remove object files and the library archive: `make fclean`
* To re-compile everything: `make re`

## Resources

### Documentation & Articles
* **The C Programming Language (K&R):** The definitive guide to C syntax and logic.
* **Man Pages:** Used extensively to understand the expected behavior and edge cases of standard functions (e.g., `man 3 strlen`).

### AI Usage Disclosure
Artificial Intelligence was used in the following ways during the development of this project:
* **Makefile Optimization:** AI was used to troubleshoot the `ar` command syntax and ensure the Makefile followed the strict requirements regarding root directory placement.
* **Edge Case Verification:** AI was consulted to provide specific edge cases for functions like `ft_split` and `ft_strtrim` to ensure robust memory handling.
* **README Generation:** AI was used to structure and format this documentation to ensure it meets professional standards.
