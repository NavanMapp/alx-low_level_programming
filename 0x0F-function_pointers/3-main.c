#include "3-calc.h"

/**
 * main - get_op_func has operators
 * @argc: arguments count
 * @argv: argument vector
 * Return: NULL
 */
int main(int argc, char *argv[])
{
    
    int one, two, ans;
    int (*func)(int, int);
    char o;
    
    if (argc != 4)
    {
        printf("Error\n);
               exit(98);
     }

    one = atoi(argv[1]);
    two = atoi(argv[3]);
               
    func = get_op_func(argv[2]);

    if (!func)
    {
        printf("Error\n");
        exit(99);
    }
    
    o = *argv[2];

    if ((o == '/' || o == '%') && two == 0)
    {
        printf("Error\n");
        exit(100);
    }
    ans = func(one, two);
               
    printf("%d\n", ans);
    return (0);
}
