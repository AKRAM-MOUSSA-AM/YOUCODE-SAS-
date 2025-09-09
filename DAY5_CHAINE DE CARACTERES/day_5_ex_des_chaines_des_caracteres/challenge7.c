#include<stdio.h>
#include<ctype.h>
void convertamajuscule(char *str){
    int i=0;
    while(str[i]){
        str[i]=toupper(str[i]);
        i++;
    }
}
int main(){
    char chaine[100];
    printf("entre votre chaine : ");
    fgets(chaine, sizeof(chaine), stdin);
    convertamajuscule(chaine);
    printf("chaine en majuscule : %s\n",chaine);
}