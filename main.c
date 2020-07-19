#include<stdio.h>
#include "rollcall.h"


int main(int argc, char **argv){

    do{
        /*Creat student list and show it.*/
        cnt = creat_list(student);
        show_name(cnt);
        printf("Please enter automatic display or enter manually (0: auto/ 1: manual):  ");
        scanf("%d",&input);
        fflush(stdin);
        function_display(input);
        printf("To continue, press'y': ");
    }while(getchar() == 'y');

    return 0;
}

