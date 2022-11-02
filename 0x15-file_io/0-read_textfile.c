#include "main.h"

/**
  * read_textfile - function that reads a text file and prints it
  * @filename: source file
  * @letters: Number of letters to read and print
  * Return: 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *ch;

	ch = malloc(sizeof(char));
	fp = fopen(filename, "r");

	if (!fp && !filename)
		return (0);

	while (!feof(fp))
	{
		fgets(ch, letters, fp);
		fputs(filename, fp);
	}

	fclose(fp);
	return (0);
}
