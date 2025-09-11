#include<stdio.h>
#include<string.h>

struct ponteur 
{
     int *Ptr;
    
};
int main(){
struct ponteur P1;
int x=10;
int y=20;   


               
              
              
         

               
        
printf("-------- ponteur----------\n");

     
     P1.Ptr=&x;
printf("la valeur de x est : %d\n",*P1.Ptr);
           
P1.Ptr=&y;

printf("la valeur de y est : %d\n",*P1.Ptr);
printf(" --------------------------------------------------\n");

}