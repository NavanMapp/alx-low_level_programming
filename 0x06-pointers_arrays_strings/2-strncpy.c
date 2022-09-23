#include <stdio.h>

/**
* _strncpy - copies a string
* @dest: destination
* @src: source
* @n: where copying stops
* Return: copied string
*/

char *_strncpy(char *dest, char *src, int n){
    if ((dest == NULL) && (*src == '\0'))
    return 0;

    while (*src && n--){
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return dest;
}
