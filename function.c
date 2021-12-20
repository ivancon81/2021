//
// Created by Ivan Conceição on 20/12/2021.
//

#include "function.h"
void hello(){
    printf("Hello world");
};

void main_menu(){
    int escolha=0;
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


    switch(escolha) {
        fflush(stdin);
        case 1:
            puts("Sub-menu 1 escolhido!");
            option_menu_search();
            scanf("%d", &escolha);
            menu_search(escolha)
;            break;
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
            printf("Error!!!")
           main_menu();
            break;


    }

}
//Menus
void option_menu_search(){
    printf("Welcome to menu SEARCH\n");
    printf("Choose one of this options above\n");
    printf("1 - Search by name\n");
    printf("2 - Search by value\n");
}
void menu_search(int option){
    int opt = 0 ;
    option_menu_search();
    scanf("%d",&opt);
    switch (opt) {
        case 1:{
             printf("You choose search by name!\n");
            break;
        }
        case 2:{
            printf("You choose search by value!\n");
            //search_value()
            break;
        }
        default:{
            printf("Wrong option!\n");
            menu_search(0);
            break;
        }
    }
}
// statistics

//files