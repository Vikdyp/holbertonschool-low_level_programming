#include "main.h"

/**
 * _strlen - compte le nombre de char dans une string
 * @s: pointeur vers chaine string
 * 
 * Return: retourne le nombre de char dans la string
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len = len + 1;
}
return (len);
}
