#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TEXT 2000
#define MAX_MOTS 500
#define MAX_LONGUEUR 100

void miniscule(char texte[TEXT]) {
    for (int i = 0; texte[i]; i++) {
        texte[i] = tolower(texte[i]);
    }
}

void ponctuation(char texte[TEXT]) {
    int i, j = 0;
    for (i = 0; texte[i] != '\0'; i++) {
        if (!ispunct(texte[i])) {
            texte[j++] = texte[i];
        }
    }
    texte[j] = '\0';
}

int occurrences(char texte[TEXT], char mot[MAX_LONGUEUR]) {
    int compteur = 0;
    int lenTexte = strlen(texte);
    int lenMot = strlen(mot);

    for (int i = 0; i <= lenTexte - lenMot; i++) {
          int  j;
        for (j = 0; j < lenMot; j++) {
            if (texte[i + j] != mot[j]) {
                break;  // si un caractere ne correspond pas, on sort de la boucle
            }
        }
        if (j == lenMot) {
            compteur++;  // si tout le mot correspond, on augmente le compteur
        }
    }

    return compteur;
}

void position(char texte[TEXT], char mot[MAX_LONGUEUR]) {
    int i, j, pos = 1, trouve = 0;

    for (i = 0; texte[i] != '\0'; i++) {
        char motCourant[MAX_LONGUEUR];
        j = 0;

        while (texte[i] != ' ' && texte[i] != '\t' && texte[i] != '\0') {
            motCourant[j++] = texte[i++];
        }
        motCourant[j] = '\0';

        if (j > 0) {
            if (strcmp(motCourant, mot) == 0) {
                printf("%d ", pos);
                trouve = 1;
            }
            pos++;
        }
    }

    if (!trouve) {
        printf(" - ");
    }
}

void recherche_exact(char texte[TEXT], char mot[MAX_LONGUEUR]) {
    texte[strcspn(texte, "\n")] = '\0';
    mot[strcspn(mot, "\n")] = '\0';

    if (strstr(texte, mot) != NULL) {
        printf("La chaine '%s' existe dans le texte.\n", mot);
    } else {
        printf("La chaine '%s'  pas existe.\n", mot);
    }
}

void recherche_partielle(char texte[TEXT], char mot[MAX_LONGUEUR]) {
    mot[strcspn(mot, "\n")] = '\0';  

    int lenTexte = strlen(texte);
    int lenMot = strlen(mot);
    int trouve = 0;

    for (int i = 0; i <= lenTexte - lenMot; i++) {
        int j;
        for (j = 0; j < lenMot; j++) {
            if (texte[i + j] != mot[j]) {
                break;
            }
        }
        if (j == lenMot) {  
            printf("Sous-chaine '%s' trouvee à la position : %d\n", mot, i + 1);
            trouve = 1;
            break; 
        }
    }

    if (!trouve) {
        printf("Sous-chaine '%s' non trouvee.\n", mot);
    }
}


void trierMots(char mots[][MAX_LONGUEUR], int freq[], int nbMots) {
    for (int i = 0; i < nbMots - 1; i++) {
        for (int j = i + 1; j < nbMots; j++) {
            if (strcmp(mots[i], mots[j]) > 0) {
                char temp[MAX_LONGUEUR];
                strcpy(temp, mots[i]);
                strcpy(mots[i], mots[j]);
                strcpy(mots[j], temp);

                int tmpf = freq[i];
                freq[i] = freq[j];
                freq[j] = tmpf;
            }
        }
    }
}

void trierParFrequence(char mots[][MAX_LONGUEUR], int freq[], int nbMots) {
    for (int i = 0; i < nbMots - 1; i++) {
        for (int j = i + 1; j < nbMots; j++) {
            if (freq[i] < freq[j]) {
                char tempMot[MAX_LONGUEUR];
                strcpy(tempMot, mots[i]);
                strcpy(mots[i], mots[j]);
                strcpy(mots[j], tempMot);

                int tempFreq = freq[i];
                freq[i] = freq[j];
                freq[j] = tempFreq;
            }
        }
    }
}

void tri_par_longueur(char mots[][MAX_LONGUEUR], int longe[], int nbMots) {
    for (int i = 0; i < nbMots - 1; i++) {
        for (int j = i + 1; j < nbMots; j++) {
            if (longe[i] > longe[j]) {
                char tempMot[MAX_LONGUEUR];
                strcpy(tempMot, mots[i]);
                strcpy(mots[i], mots[j]);
                strcpy(mots[j], tempMot);

                int tempLen = longe[i];
                longe[i] = longe[j];
                longe[j] = tempLen;
            }
        }
    }
}

void nbtotal_nbunique(int freq[], int nbMots) {
    int totalMots = 0;
    for (int i = 0; i < nbMots; i++) {
        totalMots += freq[i];
    }
    printf("Nombre total de mots: %d\n", totalMots);
    printf("Nombre de mots uniques : %d\n", nbMots);
}

void sommelongeurs(char mots[][MAX_LONGUEUR], int freq[], int nbMots) {
    int totalMots = 0;
    double sommeLongueurs = 0;
    for (int i = 0; i < nbMots; i++) {
        totalMots += freq[i];
        sommeLongueurs += (strlen(mots[i]) * freq[i]);
    }
    double longueurMoyenne;

    if (totalMots > 0) {
    longueurMoyenne = (double)sommeLongueurs / totalMots;
} else {
    longueurMoyenne = 0;
}
    printf("Longueur moyenne des mots : %.2f\n", longueurMoyenne);
}



void long_court_freq(char mots[][MAX_LONGUEUR], int freq[], int nbMots) {
    int idxLong = 0, idxCourt = 0, idxFreq = 0;
    for (int i = 1; i < nbMots; i++) {
        if (strlen(mots[i]) > strlen(mots[idxLong])) idxLong = i;
        if (strlen(mots[i]) < strlen(mots[idxCourt])) idxCourt = i;
        if (freq[i] > freq[idxFreq]) idxFreq = i;
    }
    printf("Mot le plus long    : %s (%d)\n", mots[idxLong], (int)strlen(mots[idxLong]));
    printf("Mot le plus court   : %s (%d)\n", mots[idxCourt], (int)strlen(mots[idxCourt]));
    printf("Mot le plus frequent: %s (%d)\n", mots[idxFreq], freq[idxFreq]);
}

int estPalindrome(char mot[MAX_LONGUEUR]) {
    int len = strlen(mot);
    for (int i = 0; i < len / 2; i++)
        if (mot[i] != mot[len - i - 1])
            return 0;
    return 1;
}

int sontAnagrammes(char mot1[MAX_LONGUEUR], char mot2[MAX_LONGUEUR]) {
    int lettres[200] = {0};
    if (strlen(mot1) != strlen(mot2)) return 0;

    for (int i = 0; mot1[i]; i++) {
        lettres[mot1[i]]++;
        lettres[mot2[i]]--;
    }
    for (int i = 0; i < 200; i++)
        if (lettres[i] != 0) return 0;
    return 1;
}

void nuageDeMots(char mots[][MAX_LONGUEUR], int freq[], int nbMots) {

    printf("\n--- Nuage de mots ---\n");
    for (int i = 0; i < nbMots; i++) {
        printf("%-15s ", mots[i]);
        for (int j = 0; j < freq[i]; j++)
            printf("*");
        printf("\n");
    }
}

////////////////////////////main /////////////////////////////////////// 

int main() {
    char texte[TEXT];
    char recherche[TEXT];
    char mots[MAX_MOTS][MAX_LONGUEUR];
    int freq[MAX_MOTS];
    int longe[MAX_MOTS];
    int nbMots = 0;
      int choix;
 
do{
   printf("\n=======MENU========\n");
   printf("1. Saisir un texte et analyser \n");
   printf("-------------------------------\n");
   printf("2. Afficher tous les mots (dictionnaire)\n");
   printf("-------------------------------\n");
   printf("3. Rechercher un mot exact \n");
   printf("-------------------------------\n");
   printf("4. Rechercher un mot partiel \n");
   printf("-------------------------------\n");
   printf("5. Trier les mots \n");
   printf("-------------------------------\n");
   printf("6. Statistiques globales \n");
   printf("-------------------------------\n");
   printf("7. Analyses \n");
   printf("-------------------------------\n");
   printf("8. Quitter le programme\n"); 
   printf("-------------------------------\n");
printf("saisir un nombre : ");
scanf("%d",&choix);
        getchar();


switch (choix) {
        case 1:
        char temp[TEXT];
char *token;

         printf("Entre le texte : ");
    fgets(texte, sizeof(texte), stdin);
    miniscule(texte);
    ponctuation(texte);
    texte[strcspn(texte, "\n")] = '\0';

    nbMots = 0;  
    strcpy(temp, texte);
    token = strtok(temp, " \t");
    while (token != NULL && nbMots < MAX_MOTS) {
        int existe = 0;
        for (int i = 0; i < nbMots; i++) {
            if (strcmp(mots[i], token) == 0) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            strcpy(mots[nbMots], token);
            freq[nbMots] = occurrences(texte, token);
            longe[nbMots] = strlen(token);
            nbMots++;
        }
        token = strtok(NULL, " \t");
    }
    printf(" le texte apres lanlyse : %s\n",texte);
    break;

case 2:
    printf("\n---- Dictionnaire ----\n");
    if (nbMots == 0) {
        printf("Aucun texte analysé. Veuillez d'abord saisir le texte.\n");
        break;
    }
    for (int i = 0; i < nbMots; i++) {
        printf("Mot: %-10s | Longueur: %d | Occurrences: %d | Positions: ",
               mots[i], longe[i], freq[i]);
        position(texte, mots[i]);
        printf("\n");
    }
    break;

case 3: 
    printf("\n=== Recherche exacte ===\n");
    printf("Mot chercher : ");
    fgets(recherche, sizeof(recherche), stdin);
    recherche_exact(texte, recherche);
break;
case 4:

    printf("\n=== Recherche partielle ===\n");
    printf("Sous-chaine a chercher : ");
    fgets(recherche, sizeof(recherche), stdin);
    recherche_partielle(texte, recherche);
break;
case 5:
    trierMots(mots, freq, nbMots);
    printf("\n----- Tri alphabetique ----\n");
    for (int i = 0; i < nbMots; i++) {
        printf("%s | Occurrences: %d\n", mots[i], freq[i]);
    }

    trierParFrequence(mots, freq, nbMots);
    printf("\n---- Tri par frequence decroissante ----\n");
    for (int i = 0; i < nbMots; i++) {
        printf("%s | Occurrences: %d\n", mots[i], freq[i]);
    }

    tri_par_longueur(mots, longe, nbMots);
    printf("\n---- Tri par longueur croissante ----\n");
    for (int i = 0; i < nbMots; i++) {
        printf("%s | Longueur: %d\n", mots[i], longe[i]);
    }
    break;
case 6:
    printf("\n=== Statistiques ===\n");
    nbtotal_nbunique(freq, nbMots);
    sommelongeurs(mots, freq, nbMots);
    long_court_freq(mots, freq, nbMots);
break;
case 7:
    printf("\n--- Palindromes ---\n");
    for (int i = 0; i < nbMots; i++)
        if (estPalindrome(mots[i])) printf("%s\n", mots[i]);

    printf("\n--- Anagrammes ---\n");
    for (int i = 0; i < nbMots; i++)
        for (int j = i + 1; j < nbMots; j++)
            if (sontAnagrammes(mots[i], mots[j]))
                printf("%s <-> %s\n", mots[i], mots[j]);

    nuageDeMots(mots, freq, nbMots);
break;
case 8:
            printf("Fin du programme.\n");
            printf("MERCI POUR VOTRE ATTENTION");
            break;

        default:
            printf("Choix invalide.\n");
        }
    } while (choix != 8);

}
