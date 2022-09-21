#include <stdio.h>

/**
* _strncpy - copies a string
* @dest: destination
* @src: source
* @n: where copying stops
* Return: copied string
*/

char *_strncpy(char *dest, char *src, int n){
int i = 0, j = 0;
while (src[j]){
j++;
}
while (i < n && src[i])
{
dest[i];
i++;
}
while (a < n){
dest[i] = '\0';
i++;
}
return (dest);
}
