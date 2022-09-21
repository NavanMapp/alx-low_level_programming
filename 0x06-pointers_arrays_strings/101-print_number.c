#include <stdio.h>

/**
* print_number - prints a number
* @n: number
* _putchar: ...
* Return: print number
*/

void print_number(int n){
     int r;
     if (n == 0){
          return;
     }
     r = n % 10;

     print_number(n / 10);
     printf("%i\n", r);

}