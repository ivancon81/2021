//
// Created by Ivan Conceição on 20/12/2021.
//

#ifndef INC_2021_FUNCTION_H
#define INC_2021_FUNCTION_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <dirent.h>
/*Global variables*/
#define BUFFSIZE 100
#define FILESTORAGESIZE 100
#define MAIN_PATH "C:\Users\fruip\CLionProjects\2021\Data\DataFiles"

typedef struct folder_file{
    int col;
    int lines;
    char table_data[1000][100];
    char name_file[BUFFSIZE];
}FILES;



/*Menus*/
void main_menu();
void statistics(int option);
void option_menu_search();
void menu_search(int option);
int readFilesFromFolder();
int loadFile(char file_name[]);


/*Auxiliaries functions*/
void show_table(FILES files);
#endif //INC_2021_FUNCTION_H
