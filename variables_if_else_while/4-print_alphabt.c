#include <stdio.h>

/**
* main - function
* description - When I was having that alphabet soup, I never thought that it would pay off
*
* Return: 0
*/

int main(void)
{
char letters = 'a';
for (letters = 'a'; letters <= 'z'; letters++)
if (letters != 'e' && letters != 'q')
putchar(letters);
putchar('\n');
return (0);
}
