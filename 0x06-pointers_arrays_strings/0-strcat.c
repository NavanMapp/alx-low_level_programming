#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @*dest: string 1
 * @*src: string 2
 * Return: 0
 */
char *_strcat(char *dest, char *src){
    int length = 0, i;
    
    while (dest[length]){
        dest++;
    }
    for (i = 0; i < src[i]; i++){
        dest = src[i];
        length++;
    }
    
    dest[length] = '\0';
    return(dest);
}
