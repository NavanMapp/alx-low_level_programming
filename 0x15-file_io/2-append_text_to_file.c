#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: variable
  * @text_content: variable
  * Return: 1, 0, -1
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);
	return (1);
}
