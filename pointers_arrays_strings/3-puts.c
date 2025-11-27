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
_putchar(str[i]);
i = i + 1;
}
_putchar('\n');
}
