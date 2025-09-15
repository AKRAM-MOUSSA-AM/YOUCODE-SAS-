#include <stdio.h>
#include <string.h>

int main(){
    char chain[50];
    char chain2[50];

    printf("entre le CHAIN ");
    fgets(chain,sizeof(chain),stdin);
    printf("entre le chaine 2: ");
    fgets(chain2,sizeof(chain2),stdin);

    chain[strcspn(chain, "\n")] = '\0';
    chain2[strcspn(chain2, "\n")] = '\0';

if (strstr(chain, chain2) != NULL) {
        printf(" la'%s'est existe dans  %s'\n", chain2, chain);
    } else {
        printf(" la '%s' est existe dans la   '%s'\n", chain2, chain);
    }

}