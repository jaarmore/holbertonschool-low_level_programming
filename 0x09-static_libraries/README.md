# 0x09. C - Static libraries
> This chapters is about:
+ What is a static library, how does it work, how to create one, and how to use it
+ Basic usage of commands ar, ranlib, nm.

## libholberton.a
> Static library that contains all files below:
+ int _putchar(char c); ++
+ int _islower(int c); +++
+ int _isalpha(int c); +++
+ int _abs(int n); ++
+ int _isupper(int c);
+ int _isdigit(int c);
+ int _strlen(char *s); +++
+ void _puts(char *s); +++
+ char *_strcpy(char *dest, char *src); +++
+ int _atoi(char *s);
+ char *_strcat(char *dest, char *src);
+ char *_strncat(char *dest, char *src, int n);
+ char *_strncpy(char *dest, char *src, int n);
+ int _strcmp(char *s¿1, char *s2); +++
+ char *_memset(char *s, char b, unsigned int n);
+ char *_memcpy(char *dest, char *src, unsigned int n);
+ char *_strchr(char *s, char c); +++
+ unsigned int _strspn(char *s, char *accept);
+ char *_strpbrk(char *s, char *accept);
+ char *_strstr(char *haystack, char *needle);

## create_static_lib.sh
> Script that creates a static library called liball.a from all the .c file in
in the current directory.
