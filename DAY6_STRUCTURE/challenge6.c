#include<stdio.h>
#include<string.h>

struct  Produit
{ char nom[50];
  float prix;
 int quantite;
};

int main(){
int i;
int taille;
printf("entre les nombres des produites ");
scanf("%d",&taille);
struct Produit Produitnumbr[taille];
printf("-----entre les information deS produites :----- \n");
i=0;
while (i<taille)
{ printf("\nentre le nom du produir  : ");
    scanf("%s",&Produitnumbr[i].nom);
    printf("\nentre le prix de produit  ");
    scanf("%f",&Produitnumbr[i].prix);
    printf("\nentre la quiantite de produit  : ");
    scanf("%d",&Produitnumbr[i].quantite);
    i++;
}
printf("------les information de 3 produites :----- \n");
for (i = 0; i < taille; i++) {
    printf("nom %s  \t prix :%f  \t quantite :%d  \n",
           Produitnumbr[i].nom,
           Produitnumbr[i].prix,
           Produitnumbr[i].quantite);

printf("-------------------------------------------------");





}









}