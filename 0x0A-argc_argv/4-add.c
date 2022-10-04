#include <stdio.h>
#include <stdlib.h>

/**
  * main - sum of two numbers
  * @argc: counter
  * @argv: character vector
  * Return: sum of two numbers
  */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		return (0);
		printf("\n");
	}
	else if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 0;
		for (a = 1; a < argc; a++)
		{
			b += atoi(argv[a]);
		}
		printf("%d\n", b);
	}
}
