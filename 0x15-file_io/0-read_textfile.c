#include "main.h"

/**
  * read_textfile - function that reads a text file and prints it
  * @filename: source file
  * @letters: Number of letters to read and print
  * @Return: content
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "w");

	if (!fp && !filename)
		return (0);

	fwrite(filename, sizeof(char), letters, fp);

	fclose(fp);
	return (letters);
}
