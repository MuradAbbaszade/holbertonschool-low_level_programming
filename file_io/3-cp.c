#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#define BUFSIZE 1204
/**
 * file1fail - f
 * @file: f
 */
void file1fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * file2fail - f
 * @file: f
 */
void file2fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * closefail - c
 * @fd: f
 */
void closefail(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
  * main - main
  * @argc: ar
  * @argv: Ar
  * Return: s
  */
int main(int argc, char *argv[])
{
	int file1, file2, file1rd, file2wr, closed;
	char buffer[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		file1fail(argv[1]);
	if (argv[2] == NULL)
		file2fail(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		file1fail(argv[1]);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file2 == -1)
		file2fail(argv[2]);
	file1rd = read(file1, buffer, BUFSIZE);
	if (file1rd == -1)
		file1fail(argv[1]);
	while (file1rd > 0)
	{
		file2wr = write(file2, buffer, file1rd);
		if (file2wr != file1rd)
			file2fail(argv[2]);
		file1rd = read(file1, buffer, BUFSIZE);
		if (file1rd == -1)
			file1fail(argv[1]);
	}
	closed = close(file1);
	if (closed == -1)
		closefail(file1);
	closed = close(file2);
	if (closed == -1)
		closefail(file2);
	return (0);
}
