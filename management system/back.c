#include <stdio.h>
#include <stdlib.h>
#include <string.h> // in this project, create file

#include "back.h"

int main()
{
	// write_file("./data", "report6","This is a second test");
	// read_file("./data/report6");
	// read_file_line("./data/report6", 2);
	// delete_file("./data", "report6");
	// create_file("./data", "report6");


	// get_files("./data");
	
	return 0;
}

char **get_files(char *directory)
{
    char command [512];
    sprintf(command, "cmd %s", directory);

    FILE *fp = popen (command, "r");
    if (fp == NULL) {
        perror("Error during command's execution");
        return NULL;
    }

    char **file_list = malloc(100 * sizeof(char *));
    char buffer[256];
    int i = 0;
	fgetc(fp);
    // while (fgetc(buffer, sizeof(buffer), fp) !=NULL && i < 100){
    //     buffer[strcspn(buffer, "\n")] = 0; 
    //     file_list[i] = strdup(buffer);
    //     i++;
    // }
    file_list[i] = NULL; 

    
    pclose(fp);

    return file_list;
}

void create_file(char *path, char *file_name)
{
    char full_path[256];
    strcpy(full_path, path);
    strcat(full_path, "/");
    strcat(full_path, file_name);

    FILE *file = fopen(full_path, "w");
    if (file == NULL) {
        perror("Error creating file");
    } else {
		printf("Creating file is a success\n");
	}

    fclose(file);
}

void delete_file(char *path, char *file_name)
{
	char full_path[256];
    strcpy(full_path, path);
    strcat(full_path, "/");
    strcat(full_path, file_name);

    if (remove(full_path) != 0){
        perror("Error removing file");
    } else {
        printf("Removing file is a success\n");
    }
}

void *search_file(char *path, char *file_name)
{
	char command [512];
	sprintf (command, "find %s -name %s", path, file_name);

	if (system(command) == 0){
		return "file found";
	} else {
		return "file not found";
	}
}

void *read_file(char *file_directory)
{
	FILE *fp;
	fp = fopen(file_directory, "r");
	
	if (fp == NULL)
	{
		printf("File does not exist.\n");
		return NULL;
	}
	else
	{
		char ch;
		char output[1000];
		int line = 1;
		while ((ch = fgetc(fp)) != EOF){
			if (ch != '\n'){
				strncat(output, &ch, 1);
			}
			else if (ch == '\n' && line != 4){
				output[0] = '\0';
				line++;
			}
			else if (ch == '\n' && line == 4){
				printf("%s\n", output);
				line++;
				break;
			}
		}
		fclose(fp);
	}
}

void *read_file_line(char *file_directory, int fileLine)
{
	
	FILE *fp;
	fp = fopen(file_directory, "r");
	
	if (fp == NULL)
	{
		printf("File does not exist.\n");
		return NULL;
	}
	else
	{
		char ch;
		char output[1000];
		int line = 1;
		while ((ch = fgetc(fp)) != EOF){
			if (ch != '\n'){
				strncat(output, &ch, 1);
			}
			else if (ch == '\n' && line != fileLine){
				output[0] = '\0';
				line++;
			}
			else if (ch == '\n' && line == fileLine){
				printf("%s\n", output);
				line++;
				break;
			}
		}
		fclose(fp);
	}
}

void write_file(char *path, char *file_name, char *content)
{
	FILE *fptr;

    char full_path[256];
    strcpy(full_path, path);
    strcat(full_path, "/");
    strcat(full_path, file_name);

    /* open for writing */
    fptr = fopen(full_path, "w"); 

    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
    fprintf(fptr, "%s\n", content);

    fclose(fptr);
}
