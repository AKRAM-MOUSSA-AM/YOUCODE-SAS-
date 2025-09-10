
#include <stdio.h>
#include <string.h>

void supprimerEspaces(char *chaine) {
    int i, j = 0;
    for (i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] != ' ') { 
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

    supprimerEspaces(texte);
    printf("Apres : \"%s\n", texte);

}
