#include <stdio.h>

/**
* _strncat - concatenating two strings
* @dest: destination
* @src: source
* Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n){
    int length = 0, i = 0;
    
    while (dest[length]){
        dest++;
    }
    while (i < n && src[i]{
        dest = src[i];
        length++;
        i++
    }
    
    dest[length + n + 1] = '\0';
    resturn(dest);
}