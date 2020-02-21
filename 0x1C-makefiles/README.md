# 0x1C. C - Makefiles
This topic is about how to use the `make` tool and how to create
makefiles using GNU-Linux.

## Requirements
+ Allowed editors: `vi, vim, emacs`
+ OS: `Ubuntu 14.04 LTS`
+ Version of `gcc`: 4.8.4
+ Version of `make`: GNU Make 3.81
+ All your files should end with a new line

## General
+ What are `make`, Makefiles
+ When, why and how to use Makefiles
+ What are rules and how to set and use them
+ What are explicit and implicit rules

## Tasks
---
### 0-Makefile
Create your first Makefile

### 1-Makefile
Name of the executable: `holberton`
Rules: `all`
The `all`rule builds your executable
Variables: `CC`, `SRC`
`CC`: the compiler to be used
`SRC`: the `.c` files

### 2-Makefile
Create your first useful Makefile

### 3-Makefile
+ name of the executable: `holberton`
+ rules: `all, clean, oclean, fclean, re`
  + `all`: builds your executable
  + `clean`: deletes all Emacs and Vim temporary files along with the executable
  + `oclean`: deletes the object files
  + `fclean`: deletes the Emacs temporary files, the executable, and the object files
  + `re`: forces recompilation of all source files
+ The `all` rule should recompile only the updated source files
+ The `clean, oclean, fclean, re` rules should never fail
+ You are not allowed to have a list of all the `.o` files

### 4-Makefile
A complete Makefile

### 5-island_perimeter.py
Function `def island_perimeter(grid):` that returns the perimeter of the island
described in `grid`.
