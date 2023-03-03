#include "main.h"
#include <stdio.h>
/**
* _strncat - concatenates string from other string
* @dest: concatenates string
* @src: source string
* Return: string concatenated
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0, n;
while (dest[i] != '\0')
i++;
for (n = 0; n < n && src[n] != '\0'; n++, i++)
dest[i] = src[n];
dest[i] = '\0';
return (dest);
}
