#include <stdio.h>

long long factorielle(int n) {
    long long resultat = 1;
    for (int i = 1; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

int main() {
    int nombre;
    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

   
        printf("La factorielle de %d est : %lld\n", nombre, factorielle(nombre));

    }
