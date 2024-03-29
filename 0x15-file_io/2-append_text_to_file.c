#include "main.h"

/**
 * append_text_to_file - Adds a text to the end of a file
 * @filename: Pointer to name of a file
 * @text_content: String to be added at the end of the file
 *
 * Return: If the function fails or filename is NULL - -1 and -1
 * if file does not exist user lacks write permission
 * else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
