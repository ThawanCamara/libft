<div align="center">

  <h2 align="center">Libft</h2>
  
  ![Static Badge](https://img.shields.io/badge/Rio-black?style=plastic&logo=42&logoColor=ffffff&label=%20&labelColor=131513&color=393837)
  
  <em>Your very first own library</em>


  <img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/thawancamara/libft?color=blueviolet" />
  <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/thawancamara/libft?color=blue" />
  <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/thawancamara/libft?color=brightgreen" />
  
</div>

## 🎯 Objective
> Code elementary C functions from scratch that must be compiled into a library to be used in future projects.

To achieve this the student will reproduce functionalities from multiple C libraries.

## 📓 Libraries

### ctype.h
> Contains declarations for character classification functions.

| Function | Description |
| :---: | :--- |
|[`ft_isalpha`](code/ft_isalpha.c)| test for alphabetic character |
|[`ft_isdigit`](code/ft_isdigit.c)| test for digit. Not locale-specific |
|[`ft_isalnum`](code/ft_isalnum.c)| test for alphanumeric character |
|[`ft_isalnum`](code/ft_isascii.c)| test that the parameter is an ASCII character |
|[`ft_isalnum`](code/ft_isprint.c)| test for printable character, including the space character |
|[`ft_toupper`](code/ft_toupper.c)| convert a character from lowercase to uppercase |
|[`ft_tolower`](code/ft_tolower.c)| convert a character from uppercase to lowercase |


### string.h
> Its contents are not only for string handling but also memory handling; the name is thus something of a misnomer.

| Function | Description |
| :---: | :--- |
|[`ft_memset`](code/ft_memset.c) | overwrites a memory area with n copies of a character |
|[`ft_memcpy`](code/ft_memcpy.c)| copies n bytes between two memory areas; areas shouldn't overlap |
|[`ft_memmove`](code/ft_memmove.c)| copies n bytes between two memory areas; areas may overlap |
|[`ft_memchr`](code/ft_memchr.c)| find the first occurrence of a byte in a memory area |
|[`ft_memcmp`](code/ft_memcmp.c)| compares the first n bytes of two memory areas |
|[`ft_strlen`](code/ft_strlen.c) | finds the length of a string |
|[`ft_strchr`](code/ft_strchr.c) | find the first occurrence of a byte in a string |
|[`ft_strrchr`](code/ft_strrchr.c) | find the last occurrence of a byte in a string |
|[`ft_strncmp`](code/ft_strncmp.c) | compares two strings up to n bytes |
|[`ft_strnstr`](code/ft_strnstr.c) | bounds-checked search for a substring in a string |
|[`ft_strdup`](code/ft_strdup.c) | duplicate a string |

### strings.h
> This header provides some additional string-related functions. Is a non-standard header file present in older versions of Unix.

| Function | Description |
| :---: | :--- |
|[`ft_bzero`](code/ft_bzero.c) | overwrites a memory area with n zeroes |

### bsd/string.h
> The BSD C library (libbsd) is a library that provides additional BSD-specific functions, including strlcpy and strlcat, which enhance string handling and are commonly used in BSD-based systems.

| Function | Description |
| :---: | :--- |
|[`ft_strlcpy`](code/ft_strlcpy.c) | perform secure string copying with bounds checking |
|[`ft_strlcat`](code/ft_strlcat.c) | perform secure string concatenating with bounds checking |

### stdlib.h
> Provides functions for memory allocation, process control, conversions, and more.

| Function | Description |
| :---: | :--- |
|[`ft_atoi`](code/ft_atoi.c) | convert string to integer |
|[`ft_calloc`](code/ft_calloc.c) | allocate memory from the heap |

### Non-standard
> These are either not in the libc, or are part of it but in a different form. They aim at offering usefulness as they become quite handy in subsequent projects.

| Function | Description |
| :---: | :--- |
|[`ft_strjoin`](code/ft_strjoin.c) | concatenate two strings into a new string |
|[`ft_substr`](code/ft_substr.c) | extract a substring from a string |
|[`ft_strtrim`](code/ft_strtrim.c) | trim the string by removing characters from its edges |
|[`ft_split`](code/ft_split.c) | split a string into an array using a specified delimiter |
|[`ft_itoa`](code/ft_itoa.c) | convert integer to string |
|[`ft_strmapi`](code/ft_strmapi.c) | create a new string by applying a function on the characters of another |
|[`ft_striteri`](code/ft_striteri.c) | iterate over a string applying a function on its characters |
|[`ft_putchar_fd`](code/ft_putchar_fd.c) | output a character to a file descriptor |
|[`ft_putstr_fd`](code/ft_putstr_fd.c) | output a string to a file descriptor |
|[`ft_putendl_fd`](code/ft_putendl_fd.c) | output a string with a newline to a file descriptor |
|[`ft_putnbr_fd`](code/ft_putnbr_fd.c) | output a number to a file descriptor |



