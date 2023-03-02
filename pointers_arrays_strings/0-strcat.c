#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates string from other string
 * @dest: concatenates string
 * @src: source string
 * Return: string concatenated
 */
char *_strcat(char *dest, char *src)
{
int i = 0, a;
while (dest[i] != '\0')
i++;
for (a = 0; src[a] != '\0'; a++, i++)
dest[i] = src[a];
dest[i] = '\0';
return (dest);
}
