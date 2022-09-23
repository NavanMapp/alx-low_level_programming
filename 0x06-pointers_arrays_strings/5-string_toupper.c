#include "main.h"

/**
* *string_toupper - changesn  all lowercases to uppercases
* Return: uppercase characters
*/

char *string_toupper(char *s){
    int i;

    for (i = 0; s[i] != '\0'; i++){
        if ((s[i] >= 'a') && (s[i] <= 'z')){
            s[i] -= 32;
        }
    }
    return s;
}
