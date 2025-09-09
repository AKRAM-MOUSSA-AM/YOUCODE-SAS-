#include<stdio.h>
#include <string.h>

int main() {
    char nom[50];
    printf("entre votre nom ?");
    fgets(nom, sizeof(nom), stdin);

    nom[strcspn(nom, "\n")] = '\0';

    printf("nom :  %s !\n", nom);
    printf("la taille de votre nom :%lu\n", strlen(nom));

    return 0;
}

