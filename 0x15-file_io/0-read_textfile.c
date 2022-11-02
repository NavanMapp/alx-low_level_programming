#include "main.h"

/**
  * read_textfile - function that reads a text file and prints it
  * @filename: source file
  * @letters: Number of letters to read and print
  * Return: 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, file;
	char *c;

	c = malloc(letters);

	if (!c && !filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(c);
		return (0);
	}

	r = read(file, c, letters);
	w = write(STDOUT_FILENO, c, r);

	close(file);
	return (w);
}
