#include "main.h"
#include <stddef.h>

/**
 * read_textfile - function reads file and prints to stdout
 * @filename: name of the file
 * @letters:  number of letters to be printed
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, n_of_char, wrote;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	n_of_char = read(file, buffer, letters);
	if (n_of_char == -1)
		return (0);
	buffer[n_of_char] = '\0';
	wrote = write(STDOUT_FILENO, buffer, n_of_char);
	if (wrote != n_of_char)
		return (0);
	free(buffer);
	close(file);
	return (n_of_char);
}
