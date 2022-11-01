#include "main.h"

/**
  * read_textfile - function that reads a text file and prints it
  * @filename: source file
  * @letters: Number of letters to read and print
  * @Return: 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr;
	FILE *fp = fopen(filename, "w");

	if (!fp && !filename)
		return (0);

	wr = fwrite(filename, sizeof(char), letters, fp);

	fclose(fp);
	return (wr);
}
