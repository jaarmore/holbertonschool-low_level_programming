# 0x18. C - Dynamic libraries
This project is about how to use Dynamic libraries in C programming.

## General
+ What is a dynamic library, how does it work, how to create one, and how to use it
+ What is the environment variable `$LD_LIBRARY_PATH` and how to use it
+ What are the differences between static and shared libraries
+ Basic usage `nm, ldd, ldconfig`

## Requirements
+ Allowed editors:` vi, vim, emacs`
+ All your files will be compiled on `Ubuntu 14.04 LTS`
+ Your programs, functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra and -pedantic`
+ All your files should end with a new line
+ The first line of all your files should be exactly `#!/bin/bash`

## libholberton.so, holberton.h
> Create the dynamic library libholberton.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
## 1-create_dynamic_lib.sh
> Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

## Author
**Jackson Moreno**
