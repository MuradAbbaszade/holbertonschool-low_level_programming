#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
  * read_textfile - A
  * @filename: f
  * @letters: l
  * Return: a.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, tmp, out;
char *content;
if (filename == NULL)
return (0);
content = malloc(letters * sizeof(char));
if (content == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
tmp = read(fd, content, letters);
if (tmp == -1)
{
close(fd);
free(content);
return (0);
}
out = write(STDOUT_FILENO, content, tmp);
if (out == -1)
{
close(fd);
free(content);
return (0);
}
close(fd);
free(content);
return (out);
}
