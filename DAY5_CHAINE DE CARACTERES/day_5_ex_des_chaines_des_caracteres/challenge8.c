#include<stdio.h>
#include<ctype.h>
void convertaminiscule(char *str){
    int i=0;
    while(str[i]){
        str[i]=tolower(str[i]);
        i++;
    }
}
int main(){
    char chaine[100];
    printf("entre votre chaine : ");
    fgets(chaine, sizeof(chaine), stdin);
    convertaminiscule(chaine);
    printf("chaine en miniscule: %s\n",chaine);
}