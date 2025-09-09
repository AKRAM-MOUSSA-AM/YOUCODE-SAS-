#include <stdio.h>

int longueur(char *chaine) {
    int compteur = 0;
    while (chaine[compteur] != '\0') {
        compteur++;
    }
    return compteur;
}

int main() {
    char texte[100];
    printf("Entrez une chaîne de caractères : ");
    fgets(texte, sizeof(texte), stdin);

    size_t len = longueur(texte);
    if (len > 0 && texte[len - 1] == '\n') {
        texte[len - 1] = '\0';
    }

    printf("La longueur de la chaîne est : %d\n", longueur(texte));
}