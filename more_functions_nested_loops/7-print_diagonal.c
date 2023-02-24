#include "main.h"

/**
 * print_diagonal - function
 * description Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
int count, diagonals;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (count = 0; count <= n; count++)
{
diagonals = count;
while (diagonals > 0)
{
_putchar(' ');
diagonals--;
}
_putchar('\\');
_putchar('\n');
}
}
}
