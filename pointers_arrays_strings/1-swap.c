#include "main.h"
#include <stdio.h>

/**
 * swap_int - function
 * @a :integral
 * @b :integral
 *Description: waps the values of two integers
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int R;
R = *a;
*a = *b;
*b = R;
}
