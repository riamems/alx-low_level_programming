#include "main.h"
/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int jk, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

jk = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(jk, text_content, len);

if (jk == -1 || w == -1)
return (-1);

close(jk);

return (1);
}
