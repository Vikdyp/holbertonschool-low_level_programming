#include "main.h"

/**
 * print_rev - affiche une string a l'envers
 * @s: pointeur vers la chaine
 * 
 * Return: nothing (void)
 */
void print_rev(char *s)
{
int len = 0;
int i;
while (s[len] != '\0')
{
len = len + 1;
}
i = len - 1;
while (i >= 0)
{
_putchar(s[i]);
i = i - 1;
}
_putchar('\n');
}
