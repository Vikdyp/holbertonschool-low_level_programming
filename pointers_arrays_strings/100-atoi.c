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

	/* Parcourir tous les caractères */
	while (s[i] != '\0')
	{
		/* Compter les signes avant les chiffres */
		if (s[i] == '-' && !started)
			sign = sign * -1;
		else if (s[i] == '+' && !started)
			; /* rien à faire */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
		{
			/* Si on a commencé le nombre et qu'on tombe sur autre chose */
			break;
		}

		i++;
	}

	return (result * sign);
}
