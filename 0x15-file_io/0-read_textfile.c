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

	text = malloc(sizeof(letters));
	
	if (text == NULL && filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
