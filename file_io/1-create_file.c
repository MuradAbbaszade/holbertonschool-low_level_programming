#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * create_file - a
 * @filename: f
 * @text_content: t
 * Return: a
 */
int create_file(const char *filename, char *text_content)
{
int len;
int val;
int file;
int n;
if (text_content == NULL)
text_content = "";
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
len = strlen(text_content);
n = write(file, text_content, len);
val = close(file);
if (file == -1 || n == -1 || val == -1)
return (-1);
return (1);
}
