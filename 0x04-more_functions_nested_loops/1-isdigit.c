#include "main.h"

/*
* _isdigit - checks if number is a digit
* @c: test character
* Return: 1 if it is, 0 if not
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
