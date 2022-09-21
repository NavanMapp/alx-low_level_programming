#include "main.h"
#include <stdio.h>

/**
* cap_string - all words are uppercase
* Return: an uppercase sentence
* @s: sentence
*/

char *char_string(char *str){
int a = 0, i;
int cspc = 13;
char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

while (str[a]){
if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))

str[a] -= 32;
i++;
}
a++;
}
return (str);
}
