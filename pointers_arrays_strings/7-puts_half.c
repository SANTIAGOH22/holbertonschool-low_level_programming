#include "main.h"
/**
* puts_half - a function that prints half of a string, followed by a new line
 *
* @str: This is char
 *
 */

void puts_half(char *str)
{
int c, i;
int size;
int longitud = 1;
for (c = 0; str[c] != '\0'; c++)
{
longitud++;
}
size = longitud / 2;
for (i = size; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
