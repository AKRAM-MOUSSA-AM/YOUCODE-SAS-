#include<stdio.h>
#include<string.h>
#include <math.h>

struct circle
{
   float rayon;
   
};
int main(){
float aire;
    struct circle c;
    
    
    printf("entre la valeur de rayon ?");
    scanf("%f",&c.rayon);
    
    aire = M_PI * pow(c.rayon, 2); 

printf("---------AIRE----------\n");
printf("la surface est : %f",aire);

printf("\n-------------------------");

    return 0;
}
