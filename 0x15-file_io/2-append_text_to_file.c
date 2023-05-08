#include "main.h"

/**
 * append_text_to_file - Appends the specified text to the end of a file.
 *
 * @filename: The name of the file to append to.
 * @text_content: The text to append to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i = 0, f;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

while (text_content[i] != '\0')
{
i++;
}

f = open(filename, O_WRONLY | O_APPEND);

if (f == -1)
return (-1);

write(f, text_content, i);

return (1);
}
