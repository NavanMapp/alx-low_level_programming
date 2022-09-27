#include <stdio.h>
#include "main.h"

/**
* set_string - sets pointer value to a char
* Return: 0;
*/

void set_string(char **s, char *to){
    char t;
    
    t = **s;
    **s = t;
    t = **s;
}
