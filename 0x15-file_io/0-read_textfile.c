#include "main.h"

/**
 * read_textfile - Reads a text file and prints its contents to standard output
 * @filename: The name of the file to read
 * @letters: The maximum number of letters to read and print
 *
 * Return: The number of letters read and printed, or 0 if an error occurred
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t book = 0, sam = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	book = open(filename, O_RDONLY);
	if (book < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	sam = read(book, buffer, letters);
	book = write(STDOUT_FILENO, buffer, sam);
	if (sam < 0)
		return (0);

	close(book);
	free(buffer);
	return (sam);
}
