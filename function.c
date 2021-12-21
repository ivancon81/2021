//
// Created by Ivan Conceição on 20/12/2021.
//

#include "function.h"

FILES list_of_files[100];
int number_of_files = 0;

void main_menu() {
    int escolha = 0;
    puts("========================");
    puts("          MENU          ");
    puts("========================");
    puts("1.Sub-menu 1 Leitura dos dados cvs.");
    puts("2.Sub-menu 2 Visualização dos dados em formato tabela.");
    puts("3.Sub-menu 3 Calcular as estatísticas.");
    puts("4.Sub-menu 4 Guardar resultados.");
    puts("5.Exit.");
    printf(">>");
    scanf("%d", &escolha);
    // show_all_files()


    switch (escolha) {
        case 1:
            puts("Sub-menu 1 escolhido!");
            option_menu_search();
            scanf("%d", &escolha);
            menu_search(escolha);
            break;
        case 2:
            puts("Sub-menu 2 escolhido!");
            break;
        case 3:
            puts("Sub-menu 3 escolhido!");
            break;
        case 4:
            puts("Sub-menu 4 escolhido!");
            break;
        default:
            printf("Error!!!");
            main_menu();
            break;


    }

}

//Menus
void option_menu_search() {
    printf("Welcome to menu SEARCH\n");
    printf("Choose one of this options above\n");
    printf("1 - Search by name\n");
    printf("2 - Search by value\n");
}

void menu_search(int option) {
    int opt = 0;
    option_menu_search();
    scanf("%d", &opt);
    switch (opt) {
        case 1: {
            printf("You choose search by name!\n");
            break;
        }
        case 2: {
            printf("You choose search by value!\n");
            //search_value()
            break;
        }
        default: {
            printf("Wrong option!\n");
            menu_search(0);
            break;
        }
    }
}
// statistics

//files

int loadFile(char file_name[]) {
    FILE *file;
    const char s[2] = ";";
    char *token;
    int countCol = 0, countLines = 0 , countTemp = 0 ;
    if ((file = fopen(file_name, "r")) == NULL) {
        printf("Erro na abertura do ficheiro Building\n");
        return -1;
    }
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        countCol = 0 ;

        printf("%s\n", line);
        token = strtok(line, s);
        while( token != NULL ) {
            printf( " %s\n", token );
            strcpy(list_of_files[number_of_files].table_data[countTemp], token);
            token = strtok(NULL, s);
            countCol++;
            countTemp++;
        }
        countLines +=1  ;
        printf("countCol : %d\n",countCol);
    }
    printf("countLines : %d\n",countLines);
    list_of_files[number_of_files].col = countCol;
    list_of_files[number_of_files].lines = countLines;

    fclose(file);
    return 0;
}

int readFilesFromFolder() {
    DIR *d;
    struct dirent *dir;
    int i = 0;
    char path[BUFFSIZE] = "C:\\Users\\fruip\\CLionProjects\\2021\\Data\\DataFiles\\";
    int pathStaticSize = strlen(path);
    d = opendir("C:\\Users\\fruip\\CLionProjects\\2021\\Data\\DataFiles");
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            char pathTemp[pathStaticSize+strlen(dir->d_name)+1];
            i=0;
            for (int j = 0; j < pathStaticSize; j++) {
                pathTemp[i] = path[j];
                i++;
            }
            if (strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0) {

                for (int j = 0; j < strlen(dir->d_name); j++) {
                    pathTemp[i] = dir->d_name[j];
                    i++;
                }

                pathTemp[i] = '\0';
                printf("PATH %s\n", pathTemp);
                strcpy(list_of_files[number_of_files].name_file,dir->d_name);
                loadFile(pathTemp);
                number_of_files++;

            }
        }
        closedir(d);
    }
    printf("number : %d\n",number_of_files);
    for (int j = 0; j < number_of_files ; ++j) {
        show_table(list_of_files[j]);
    }
     return (0);
}
void show_table(FILES files){
    printf("\nTable of file: %s\n" ,files.name_file);
    int count = 0;
    for(int i = 0 ; i <= files.lines;i++){
        printf(" %s     ",files.table_data[i]);
        if(count == files.col-1){
            printf("\n");
            count=0;
        }else{
            count++;
        }
    }
}

/*forms*/

void standard_deviation(){
    //fazer a media
    // soma de todos os valores ( cada valor - a meia ) ao quadrado a dividir pela numero de dados
}
float sum(){
    // soma de todos os dados
    return 0;
}

float average (){
    // soma de todos os dados dividir pelo o total de dados
    return 0;
}

float max(){

    return 0;
}

float min( ){
    return 0;
}

float median(){
    //total de dados a dividir por dois se for impar retorna o valor que ta no meio senao soma as duas posicoes e divide por 2
    return 0;
}