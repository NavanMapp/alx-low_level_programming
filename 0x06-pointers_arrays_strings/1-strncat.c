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
    for (i = 0; src[i] != '\0'; i++){
        dest[i + 1] = src[i];
        
    }
    
    dest[length + n + 1] = '\0';
    return(dest);
}
