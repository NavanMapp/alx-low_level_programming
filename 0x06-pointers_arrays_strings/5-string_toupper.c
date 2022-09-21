#include "main.h"

/**
* *string_toupper - changesn  all lowercases to uppercases
* Return: uppercase characters
*/

char *string_toupper(char *){
char c;
int i = 0;
while (c[i]){
	if (c[i] >= 97 && c[i] <= 122){
		c[i] -= 32;
	}
	c++;
}

return (c);
}
