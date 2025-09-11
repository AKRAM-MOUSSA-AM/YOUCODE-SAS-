#include <stdio.h>
#include <string.h>
struct Livre 

{  char titre[50];
    char auteur[50];
    int annee;


};
int main(){
struct Livre L1;

 strcpy(L1.titre, "L'economie expliquee a ma fille");
    strcpy(L1.auteur, "Andre Fourcans");
    L1.annee = 2006;


printf("-------- Livre----------\n");
printf("le titre est : %s\n",L1.titre);
printf("l'auteur est : %s\n",L1.auteur);
printf("l'annee est : %d\n",L1.annee);
printf(" ------------------------------------------\n");

}
/*
titre=printf("L'Économie expliquée à ma fille");
auteur=printf("Andre fourcans");
 
annee=2006;
*/