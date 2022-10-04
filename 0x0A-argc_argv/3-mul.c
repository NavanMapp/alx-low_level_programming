#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: counter
  * @argv: vector
  * Return: number
  */

int main(int argc, char *argv[])
{
	int i, a;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
	}
	else
	{
		a = 1;
		for (i = 1; i < argc; i++)
		{
			a *= atoi(argv[i]);
		}
		printf("%d\n", a);
	}
	return (0);
}
