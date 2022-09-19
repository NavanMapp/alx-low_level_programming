#include "main.h"

/**
* char *_strcpy - copying string variable
* @dest: destination
* @src: source
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int inc = 0;
while (*(src + inc) != '\0')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';
return (dest);
}
