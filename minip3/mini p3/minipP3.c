#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chatbot(int hello,int hi) {
    if (hello == 1 || hi == 2) {
        printf("Hi! How can I help you today?\n");
    } else {
        printf("Hi! How can I help you today?\n");
    }
}

void chainbot(int happy,int sad) {
    if (happy == 1) {
        printf("Hi! Great to hear that!\n");
    } else if (sad == 2) {
        printf("Hi! I'm sorry to hear that!\n");
    } else {
        printf("I hope your day gets better!\n");
    }
}

int main() {
    int hello;
    int happy;
    int hi;
    int sad;
    printf("Hello! I am a chatbot. How can I help you? \n");
    scanf("%d", &hello);

    printf("How are you feeling today?  \n");
    scanf("%d", &happy);




chatbot( hello, hi) 
chainbot(happy,sad);
    return 0;
}