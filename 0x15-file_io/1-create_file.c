#include "main.h"

/**
  * create_file - function that creates a file
  * @filename: file variable
  * @text_content: variable
  * Return: -1, 0, 1
  */

int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
