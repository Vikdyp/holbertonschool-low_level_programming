#include "main.h"

/**
 * _strcpy - copie la string src dans dest (avec le '\0')
 * @dest: buffer de destination
 * @src: string source
 *
 * Return: le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}
