#include <stdio.h>

/**
* print_number - prints a number
* @n: number
* _putchar: ...
* Return: print number
*/

#include <stdio.h>

void print_number(int n){

     if (n < 0){
         _putchar ('-');
         n = -n;
      }

     if (n / 10)
	     print_number(n / 10);

     _putchar(n % 10);
}
