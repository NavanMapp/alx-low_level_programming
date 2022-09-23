#include "main.h"
#include <stdio.h>

/** reverse_array - reverses array values
 * @*a: variable
 *@n: elements in an array
 * Return: reversed array
 */
void reverse_array(int *a, int n){
    int c = 0, d, b, t;
    int end = n - 1;
    
    for (c = 0; c < n/2; c++) {
        t = a[c];
        a[c] = a[end];
        a[end] = t;    
        end--;
    }

    for (c = 0; c < n; c++)
        printf("%d\n", a[c]);
}
