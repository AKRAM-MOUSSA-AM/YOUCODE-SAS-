#include<stdio.h>
#include<string.h>
int main(){
char chaines[50],caractere;
int compture=0;
printf("entre le chaine : ");
fgets(chaines, sizeof(chaines), stdin);
printf("entre la caractere a rechercher : ");
scanf("%c",&caractere);
int i;
i=0;
while ( chaines[i] != '\0') {
    if(chaines[i] == caractere)
{
    compture++;


}
i++;
 }
    

    printf("le caractere %c est repeter %d fois dans le chaine %s\n",caractere,compture,chaines);
 
}



