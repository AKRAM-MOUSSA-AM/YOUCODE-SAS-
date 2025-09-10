
#include <stdio.h>
#include <string.h>

int main() {
    char texte[100], souschaine[100];

    printf("Entrez une chaine principale : ");
    fgets(texte, sizeof(texte), stdin);

    printf("Entrez une sous chaine : ");
    fgets(souschaine, sizeof(souschaine), stdin);

    
    texte[strcspn(texte, "\n")] = '\0';
    souschaine[strcspn(souschaine, "\n")] = '\0';

    if (strstr(texte, souschaine) != NULL) {
        printf("La sous chaine %s existe dans %s\n", souschaine, texte);
    } else {
        printf("La sous chaine %s n'existe pas dans %s .\n", souschaine, texte);
    }

}