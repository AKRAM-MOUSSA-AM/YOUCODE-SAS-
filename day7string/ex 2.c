
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void supprimer(char *chaine) {
    int i, j = 0;
    for (i = 0; chaine[i] != '\0'; i++) {
        if (!ispunct(chaine[i])) { 
            chaine[j++] = chaine[i];
        }
    } 
    chaine[j] = '\0'; 
}

int main() {
    char texte[100];
    printf("Entrez la chaine de caracteres : ");
    fgets(texte, sizeof(texte), stdin);
    printf("Avant : \"%s\n", texte);

    supprimer(texte);
    printf("Apres : \"%s\n", texte);

}