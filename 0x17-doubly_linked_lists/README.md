# 0x17. C - Doubly linked lists
This topic is about Double linked list in C programming.

## General
+ What is a doubly linked list
+ How to use doubly linked lists

## Requirements
+ Allowed editors: `vi, vim, emacs`
+ All your files will be compiled on `Ubuntu 14.04 LTS`
+ Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra and -pedantic`
+ All your files should end with a new line.

## Data structure
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## 0-print_dlistint.c
> function that prints all the elements of a dlistint_t list.

## 1-dlistint_len.c
> function that returns the number of elements in a linked dlistint_t list.

## 2-add_dnodeint.c
> function that adds a new node at the beginning of a dlistint_t list.

## 3-add_dnodeint_end.c
> function that adds a new node at the end of a dlistint_t list.

## 4-free_dlistint.c
> function that free a dlistint_t list.

## 5-get_dnodeint.c
> function that returns the nth node of a dlistint_t linked list.

## 6-sum_dlistint.c
> function that returns the sum of all the data (n) of a dlistint_t linked list.

## 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c
> function that inserts a new node at a given position.

## 8-delete_dnodeint.c
> function that deletes the node at index index of a dlistint_t linked list.

## Author
_Jackson Moreno_