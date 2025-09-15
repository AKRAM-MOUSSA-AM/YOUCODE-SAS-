#include <stdio.h>
#include <math.h>
#define PI 3.14159

struct circle 
{
   float rayon;
   
};
void calculerAire(struct circle c) {
    float aire = PI * c.rayon * c.rayon;
    printf("Le rayon du cercle est : %.2f\n", c.rayon);
    printf("L'aire du cercle est   : %.2f\n", aire);
}
 
int main(){

    struct circle c;
    float aire;
    
    printf("entre la valeur de rayon ?");
    scanf("%f",&c.rayon);
        calculerAire(c);

    aire = PI * pow(c.rayon, 2); 

printf("---------AIRE----------\n");
printf("la surface est : %f",aire);

printf("\n-------------------------");

    return 0;
}