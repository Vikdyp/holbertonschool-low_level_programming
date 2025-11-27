#include "main.h"
/**
 * remplace a par b et b par a
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
