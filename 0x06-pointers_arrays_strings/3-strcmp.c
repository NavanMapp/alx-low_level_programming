#include <stdio.h>

/**
* _strcmp - compares two strings
* @s1: variable 1
* @s2: variable 2
* Return: compared string
*/

int _strcmp(char *s1, char *s2){
    int i = 0, j = 0, k = 0, r = 0, l;
    while (s1[i]){
        i++;
    }
    
    while (s2[j]){
        j++;
    }
    
    if (i <= j){
        l = i;
    }else{
        l = j
    }
    
    while (k <= l){
        if ( s1[k] == s2[k]){
                k++;
                continue;
        }else{
            r = s1[k] - s2[k];
        }
        k++;
    }
    return (r);
}