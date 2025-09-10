#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct  Rectangle
{  float longueur;
    float largeur;
    float aire;
    
};
int main(){
struct Rectangle r1;

printf("entre la longueur :");
scanf("%f",&r1.longueur);
printf("entre la largeur :");
scanf("%f",&r1.largeur);

    r1.aire = r1.longueur * r1.largeur;

          printf("-------- Rectangle----------\n");
printf("la longueur est : %f\n",r1.longueur);
printf("la largeur est : %f\n",r1.largeur);
printf("l'aire est : %f\n",r1.aire);
printf(" --------------------------------------------------\n");


}