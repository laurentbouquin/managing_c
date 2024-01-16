#include <stdio.h>
#include <stdlib.h>


char **get_files(char *directory);

void create_file(char *path, char *file_name);

void delete_file(char *path, char *file_name);

void *search_file(char *path, char *file_name);

void *read_file(char *file_directory, int line_number);

void write_file(char *path);