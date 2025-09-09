#include <stdio.h>


int minimum(int a, int b) {
    if(a<b) {
        return a;
    } else {
        return b;
    }
    
}

int main() {
    int x, y;

    printf("Entrez le premier nombre : ");
    scanf("%d", &x);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &y);

   

    int min = minimum(x, y);
   
    printf("Le minimum entre %d et %d est : %d\n", x, y, min);

    return 0;
}