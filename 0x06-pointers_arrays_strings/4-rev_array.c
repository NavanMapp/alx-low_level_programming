#include "main.h"
#include <stdio.h>

/** reverse_array - reverses array values
 * @*a: variable
 *@n: elements in an array
 * Return: reversed array
 */
oid reverse_array(int *a, int n){
     int i = 1, j, k, *p;
     p = a;
    
     while (i < n){
         p++;
     }
     for (j = 0; j < i; j++){
         k = a[j];
         a[j] = *p;
         *p = k;
         p--;
     }
 }