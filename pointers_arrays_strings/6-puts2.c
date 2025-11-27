#include "main.h"

/**
 * puts2 - affiche un caractere sur 2
 * @str: chaine string
 * 
 * Return: nothing (void)
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}
