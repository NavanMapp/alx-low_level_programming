#include "main.h"

/**
  * read_textfile - function that reads a text file and prints it
  * @filename: source file
  * @letters: Number of letters to read and print
  * @Return: content
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nbytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	while ((nbytes = read(buffer, sizeof(char), sizeof(buffer), filename)) != 0)
		write(buffer, sizeof(char), nbytes, stdout);

	return (nbytes);
}
