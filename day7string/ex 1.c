#include<stdio.h>
#include<string.h>
#include<ctype.h>


void chainmajuscule(char chaine [50]){
 int i=0;
    while(chaine[i]){
        chaine[i]=tolower(chaine[i]);
        i++;
    }
}
  int main(){
    char chaine[100];
    printf("entre votre chaine : ");
    fgets(chaine, sizeof(chaine), stdin);
    chainmajuscule(chaine);
    printf("chaine en majuscule : %s\n",chaine);
}


