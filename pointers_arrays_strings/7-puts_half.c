#include "main.h"

/**
 * puts_half - affiche la deuxième moitié d'une string
 * @str: pointeur vers la chaîne
 *
 * Return: nothing (void)
 */
void puts_half(char *str)
{
int len = 0;
int start;
int i;

/* Calculer la longueur */
while (str[len] != '\0')
len++;

/* Choisir le point de départ */
if (len % 2 == 0)
start = len / 2;
else
start = (len + 1) / 2;

/* Afficher depuis start jusqu'à la fin */
for (i = start; i < len; i++)
_putchar(str[i]);

_putchar('\n');
}
