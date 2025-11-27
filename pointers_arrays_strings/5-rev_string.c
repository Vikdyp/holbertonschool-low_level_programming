#include "main.h"

/**
 * rev_string - inverse une string en place
 * @s: pointeur vers la chaîne
 *
 * Return: nothing (void)
 */
void rev_string(char *s)
{
int len = 0;
int i = 0;
int j;
char temp;

/* Trouver la longueur */
while (s[len] != '\0')
{
len = len + 1;
}

j = len - 1;

/* Inverser en place */
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;

i++;
j--;
}
}
