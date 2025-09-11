#include<stdio.h>
#include<string.h>
struct compte 
{
    char num[50];
    float solde;
    float solde2;
};
int main (){
double resultat;

 struct compte c;
 char reponce[20];
    printf("entre votre nom ? ");
    fgets(c.num, sizeof(c.num), stdin);
    printf("entre votre solde actuelle ");
    scanf("%f",&c.solde);
 printf("entre votre solde qui vous ajoute ");
scanf("%f",&c.solde2);
while (1)
{

resultat=c.solde+c.solde2;
printf("----------resultst--------\n");
printf("votre name est : %s \n",c.num);
printf("votre solde est : %f \n",c.solde);
printf("votre solde est edite  +%f! \n",c.solde2);
printf("votre solde actuelle est : %lf \n",resultat);
printf("\n----------------------------\n");
        c.solde = resultat;

printf("tu veux ajouter un neuveux virement , si non taper  exite ou 0  ");
scanf("%s", reponce);
if (strcmp(reponce, "exit") == 0 || strcmp(reponce, "0") == 0) {
            printf("Merci pour votre visite.\n");
            break;

}
printf("entre   le neuveaux virement");
scanf("%f",&c.solde2);
}
}