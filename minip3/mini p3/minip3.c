#include<stdio.h>
#include<stdlib.h>
void chatbot(int hello,int hi){
    int HI = hello;
    if(hello == 1){
        printf("Hi! how can i helpe you today ?\n");
    }
    else if(HI == 2){
        printf("Hi! how can i helpe you today ?\n");
    }
    else{
        printf("\n");
    }
}
void chainbot(int happy,int sad){
        

    
        if(happy == 1){
            printf("Hi! Great to hear that!\n");
        }
        else if(sad == 2){
            printf("Hi!  im sorry to hear that!\n");
        }
        else{
            printf("\n");
        }
}

int main()
{
    int hello;
     int happy;
    printf("Hello! I am a chatbot. How can I help you?\n");
    scanf("%d", &hello);
    printf("Hi! how can i helpe you today ? : \n");
    scanf("%d", &hello);
    chatbot(hello,hi);
     chainbot(happy,sad);


 
}