#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename:  A pointer to path of the file
 * @letters: number of letters to read and print
 *
 * Return: If the function fails or filename is NULL -
 *  0 if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wt;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd  = read(op, buf, letters);
	wt = write(STDOUT_FILENO, buf, rd);

	if (op == -1)
		return (0);
	free(buf);
	close(op);

	return (wt);
}
