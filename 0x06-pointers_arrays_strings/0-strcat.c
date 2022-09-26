#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @*dest: string 1
 * @*src: string 2
 * Return: 0
 */
char *_strcat(char *dest, char *src){
	int length = 0, i = 0;

    while (dest[length]){
        dest++;
    }
    for (i = 0; src[i] != '\0'; i++){
        dest[i + 1] = src[i];

    }
	 dest[i] = '\0';
	 return (dest);
}
