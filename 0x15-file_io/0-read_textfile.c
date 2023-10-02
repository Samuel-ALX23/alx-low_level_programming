#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads and prints a text file to standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed,
 *         or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *content_buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	content_buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (content_buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, content_buffer, letters);

	if (bytes_read == -1)
	{
		free(content_buffer);
		close(file_descriptor);
		return (0);
	}

	content_buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, content_buffer, bytes_read);

	free(content_buffer);
	close(file_descriptor);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_read);
}
