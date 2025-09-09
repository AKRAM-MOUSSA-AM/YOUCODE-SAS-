#include <stdio.h>
#include <string.h>
 char  chaines1[50];
    char  chaines2[50];


int main() {
    printf("entre votre nom  " );
    fgets(chaines1, sizeof( chaines1), stdin);
     chaines1[strcspn( chaines1, "\n")] = '\0';
    printf("entre votre prenom  ");
    fgets(chaines2, sizeof( chaines2), stdin);
     chaines2[strcspn( chaines2, "\n")] = '\0'; 



    printf("%s \n", strcat( chaines1 ,  chaines2));  
    return 0;
}