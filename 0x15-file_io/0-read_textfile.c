#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: a- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t fptr;
	ssize_t a;
	ssize_t b;

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	b = read(fptr, ptr, letters);
	a = write(STDOUT_FILENO, ptr, b);

	free(ptr);
	close(fptr);
	return (a);
}
