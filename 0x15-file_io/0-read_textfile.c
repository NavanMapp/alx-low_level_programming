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
	ssize_t r;

	ch = malloc(sizeof(char*) * letters);
	fp = fopen(filename, "r");

	if (!fp && !filename)
		return (0);

	r = fread(ch, sizeof(char), letters, fp);
	fwrite(ch, sizeof(char), letters, fp);	

	free(ch);
	fclose(fp);
	return (r);
}
