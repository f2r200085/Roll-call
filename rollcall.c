#define __ROLLCALL_C__

#include<stdio.h>
#include "rollcall.h"

unsigned int creat_list(unsigned int member){
    unsigned int cnt =0;
    for(int i=0;i<member;i++){
        cnt |= 1 << (i);
    }
    return cnt;
}

void show_name(unsigned int member){
    printf("Student: ");
    if(member ==0 ){
        printf("All arrived.");
    }
    for(int i=0;i<student;++i){
        if(member & 0x01){
            printf("%3d",i+1);
        }
        member = member >> 1;
    }
    printf("\n\n");
}

void function_display(unsigned int input){
    switch(input){
        case auto:
            do{
                for(int i=1; i <= student ; ++i){
                    printf("Please key in the student number: ");
                    printf("input: %d\n",i);
                    cnt &= ~( 1 << (i-1));
                    show_name(cnt);
                }
            }while(cnt!=0);
        break;
        case manual:
            do{
                printf("Please key in the student number: ");
                scanf("%d",&input);
                fflush(stdin);
                printf("input: %d\n",input);
                cnt &= ~( 1 << (input-1));
                show_name(cnt);
            }while(cnt!=0);
        break;
        default:
            printf("Without this option, please enter (auto: 0 or manual: 1)\n");
        break;
    }
}

