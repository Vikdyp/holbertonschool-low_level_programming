#include "main.h"

/**
 * _atoi - convertit une string en entier
 * @s: chaîne à convertir
 *
 * Return: l'entier converti, ou 0 si aucun chiffre
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int started = 0;

    /* 1. Parcourir tous les caractères */
    while (s[i] != '\0')
    {
        /* Compter les signes AVANT les chiffres */
        if (s[i] == '-' && !started)
            sign = sign * -1;
        else if (s[i] == '+' && !started)
            ; /* rien à faire */

        /* Si on tombe sur un chiffre */
        else if (s[i] >= '0' && s[i] <= '9')
        {
            started = 1;
            result = result * 10 + (s[i] - '0');
        }

        /* Si on a commencé les chiffres et qu'on tombe sur autre chose → stop */
        else if (started)
            break;

        i++;
    }

    return (result * sign);
}
