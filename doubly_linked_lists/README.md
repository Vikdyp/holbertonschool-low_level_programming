# Doubly Linked Lists

This project implements various operations on doubly linked lists in C, following the Betty coding style and Holberton School requirements.

## Data Structure

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Requirements

- All files compiled on Ubuntu 20.04 LTS using gcc with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code follows Betty style
- No global variables
- Maximum 5 functions per file
- Only allowed C standard library functions: `malloc`, `free`, `printf`, `exit`
- All function prototypes are in `lists.h`
- All header files are include guarded

## Files

| File | Description |
|------|-------------|
| `lists.h` | Header file containing all function prototypes and the doubly linked list structure |
| `0-print_dlistint.c` | Function that prints all elements of a `dlistint_t` list |
| `1-dlistint_len.c` | Function that returns the number of elements in a `dlistint_t` list |
| `2-add_dnodeint.c` | Function that adds a new node at the beginning of a `dlistint_t` list |
| `3-add_dnodeint_end.c` | Function that adds a new node at the end of a `dlistint_t` list |
| `4-free_dlistint.c` | Function that frees a `dlistint_t` list |

## Function Prototypes

```c
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
```

## Compilation

All files can be compiled using:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <function_file.c> -o <output>
```

## Author

Holberton School Project - Doubly Linked Lists

## Repository

- **GitHub repository:** `holbertonschool-low_level_programming`
- **Directory:** `doubly_linked_lists`
