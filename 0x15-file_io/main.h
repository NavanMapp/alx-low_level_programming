#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
<<<<<<< HEAD
#include <fcntl.h>
#include <unistd.h>
=======
#incude <fcntl.h>
>>>>>>> c27115ce22585991460c8084514aaf7aeadd8925

/** prototypes */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /** MAIN_H */
