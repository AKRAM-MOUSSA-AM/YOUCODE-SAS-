#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct etudiant 
{   char nom [20];
    char prenom[20];
    float notes[7];
    
};
int main ()
{    struct etudiant e1;
int n ;
   int i;
    printf("entre le nome de l'etudient : ");
    fgets(e1.nom, sizeof(e1.nom), stdin);
        e1.nom[strcspn(e1.nom, "\n")] = 0; 

    printf("entre le prenom de l'etudient : ");
    fgets(e1.prenom, sizeof(e1.prenom), stdin);
        e1.prenom[strcspn(e1.prenom, "\n")] = 0; 

    printf("entre la taille de tableau des notes : ");
    scanf("%d",&n);
       
    
  
 
    for(i=0;i<n;i++)
    {   printf("entre la note : ");
        scanf("%f",&e1.notes[i]);
       
    }
    printf("-------- informations de l'etudient----------\n");
printf("le nom de l'etudion est : %s",e1.nom);
printf("le prenome de letudient est : %s",e1.prenom);
printf("les notes de l'etudient sont : ");
    for (i = 0; i < n; i++) {
    printf("%f \n",e1.notes[i]);
}


printf(" --------------------------------------------------\n");

}
