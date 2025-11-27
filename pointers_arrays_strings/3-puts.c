#include "main.h"

/**
 * _puts - affiche la string donner
 * @str: chaine string
 * 
 * Return: nothing (void)
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i = i + 1;
_putchar(str[i]);
}
_putchar('\n');
}
