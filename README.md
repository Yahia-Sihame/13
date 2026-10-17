![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=for-the-badge&logo=42)
![C Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Version](https://img.shields.io/badge/Version-19.2-black?style=for-the-badge)

*This project has been created as part of the 42 curriculum by ysihame.*

# Libft - Your Very First Own Library 📚

## 📖 Description
**Libft** is the first foundational project of the 42 curriculum. The goal is to build a robust, custom C library (`libft.a`) from scratch. Since C programming can be tedious without standard functions, this project requires rebuilding essential `libc` functions, along with creating additional utility functions for string manipulation and linked list management.

This library not only serves as a deep dive into C memory management, pointers, and algorithmic logic but will also be a crucial tool utilized in almost all future 42 projects.

### 🛠️ What's Inside? (The 43 Functions)
The library is structured into three main categories (fully integrated as per version 19.2):

#### 1. Libc Functions (Standard Library Re-implementations)
* **Memory Management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **String Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Character Classification & Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **Numeric Conversion:** `ft_atoi`

#### 2. Additional Utility Functions
* **String Processing:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
* **Type Conversion:** `ft_itoa`
* **File Descriptor Outputs:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

#### 3. Linked List Functions (t_list)
* **Creation & Addition:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
* **Iteration & Information:** `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, `ft_lstmap`
* **Deletion:** `ft_lstdelone`, `ft_lstclear`

---

## 🚀 Instructions

### Compilation
The project includes a `Makefile` that compiles the source files into a static library (`libft.a`) using `cc` with strictly enforced flags (`-Wall -Wextra -Werror`).

Run the following command at the root of the repository:
```bash
make

