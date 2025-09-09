#include<stdio.h>
#include<string.h>
void inverse_chaine(char str[]){
int i=0;
int j=strlen(str)-  1;
char temp;
while(i<j){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}
}   
int main(){
    char mot[1001];
    printf("entre une chaine  : ");
    scanf("%s",mot);
    inverse_chaine(mot);
    printf("chaine inverse : %s ",mot);
}


/*void inverser_chaine(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char mot[100];

    printf("Entrer une chaine : ");
    scanf("%s", mot);

    inverser_chaine(mot);

    printf("Chaine inversée : %s\n", mot);

    return 0;
}*/