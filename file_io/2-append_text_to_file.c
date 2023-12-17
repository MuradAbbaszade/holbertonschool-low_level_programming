#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * append_text_to_file - a
 * @filename: f
 * @text_content: t
 * Return: a
 */
int append_text_to_file(const char *filename, char *text_content)
int len;
int close_val;
int file; 
int i;
file = open(filename, O_WRONLY | O_APPEND);
if (text_content == NULL)
text_content = "";
len = strlen(text_content);
i = write(file, text_content, len);
close_val = close(file);
if (file == -1 || i == -1 || close_val == -1)
return (-1);
return (1);
}
