#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and
 *prints it to the POSIX standard output.
 * @filename: text file  being read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
*if the file can not be opened or read, return 0
*if filename is NULL return 0
*if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

char *pr;
ssize_t jk;
ssize_t w;
ssize_t r;

jk = open(filename, O_RDONLY);
if (jk == -1)
return (0);
pr  = malloc(sizeof(char) * letters);
r  = read(jk, pr, letters);
w = write(STDOUT_FILENO, pr, r);

free(pr);
close(jk);
return (w);
}
