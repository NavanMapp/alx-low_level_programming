#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to the POSIX standard output
* @filename: The source file
* @letters: Number of letters to reads and prints
* Return: 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nbytes;
	char *buffer;

	if (text == NULL && filename == NULL)
		return (0);
	
	while ((nbytes = read(buffer, sizeof(char), sizeof(buffer), filename)) != 0)
		write(buffer, sizeof(char), nbytes, stdout);
	
	return (nbytes);
}
