
#include <stdio.h>

int mult(int a, int b) {
    return a  *  b;
}

int main() {
    int x, y, resultat;

    printf("Entrez le premier nombre : ");
    scanf("%d", &x);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &y);

    resultat = mult(x, y);

    printf("La multiplication de %d et %d est : %d\n", x, y, resultat);

    return 0;
}
