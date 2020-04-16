# 0x1E. C - Search Algorithms


## General
+ What is a search algorithm
+ What is a linear search
+ What is a binary search
+ What is the best search algorithm to use depending on your needs.


## Requirements
+ Allowed editors: `vi, vim, emacs`
+ All your files will be compiled on `Ubuntu 14.04 LTS`
+ Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra and -pedantic`
+ All your files should end with a new line
+ Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ You are only allowed to use the `printf` function of the standard library. Any call to another function like `strdup`, `malloc`,  is forbidden.

## Tasks

### [0. Linear search](0-linear.c)
Function that searches for a value in an array of integers using the `Linear search algorithm`.


### [1. Binary search](1-binary.c)
Function that searches for a value in a sorted array of integers using the `Binary search algorithm`.


### [2. Big O #0](2-O)
What is the `time complexity` (worst case) of a linear search in an array of size `n`?.


### [3. Big O #1](3-O)
What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?.


### [4. Big O #2](4-O)
What is the `time complexity` (worst case) of a binary search in an array of size `n`?.


### [5. Big O #3](5-O)
What is the `space complexity` (worst case) of a binary search in an array of size `n`?.


### [6. Big O #4](6-O)
What is the `space complexity` of this function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## AUTHOR
**_Jackson Moreno_**
