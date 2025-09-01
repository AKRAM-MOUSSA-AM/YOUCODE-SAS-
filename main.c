#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  nom[30];
    char prenom [30];
    char sexe [30];
    char adresseemail[30];
    int age;
    printf("\n entre nom:  \n prenom: \n sexe:  \n adresseemaile: \n age : \n");

    scanf("%s %s %s %s%d",&nom,&prenom,&sexe,&adresseemail,&age);
    printf("\n votre nom: %s \n prenom: %s \n sexe:%s \n email :%s \n age:%d\n",nom,prenom,sexe,adresseemail,age );

    return 0;
}
