#include<stdio.h>
#include<string.h>
void longueur(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 > len2) {
        printf("str1 est plus long\n");
    } else if (len1 < len2) {
        printf("str2 est plus long\n");
    } else {
        printf("Les chaines sont de longueur egale\n");
    }
}
  
int main() {

    int ret;
    char  str1[50];
    char  str2[50];
  printf("entre votre mot 1 " );
    fgets(str1, sizeof( str1), stdin);
     str1[strcspn( str1, "\n")] = '\0';
    printf("entre votre mot 2 " );
    fgets(str2, sizeof( str2), stdin);
     str2[strcspn( str2, "\n")] = '\0';
       ret = strncmp(str1, str2, 6);
         
           longueur(str1, str2);

    return 0;
}