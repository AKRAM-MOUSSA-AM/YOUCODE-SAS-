#include<stdio.h>
#include<string.h>  

struct entreprise 
{  char nom[20];
    char prenom[20];
    int age;
   
};
int main(){
   
char nom[20];
   char prenom[20];
    int age;
            struct entreprise e1;

    printf("entre votre nome  : ");
    fgets(nom, sizeof(e1.nom), stdin);
     printf("entre votre prenom  : ");
     fgets(prenom, sizeof(e1.prenom), stdin);
     printf("entre votre age : ");
     scanf("%d",&age);
     printf("-------- informations des employes----------\n");
        printf("votre nome est : %s",nom);
        printf("votre prenom est : %s",prenom);
        printf("votre age est : %d",age);
printf("\n---------------------------------------------------\n");


}
