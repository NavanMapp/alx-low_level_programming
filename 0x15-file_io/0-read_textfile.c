#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to the POSIX standard output
* @filename: The source file
* @letters: Number of letters to reads and prints
* Return: 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = fopen(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = fread(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
