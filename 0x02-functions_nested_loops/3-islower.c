#include "main.h"

/**
* _islower - tests whether a character is a
* @c: parameter or member
* Return: 1 if lowercase and 0 if not lowercase
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
