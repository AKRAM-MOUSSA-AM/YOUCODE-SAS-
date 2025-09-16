
#include<stdio.h>
#include<string.h>
void compture(char chain[50]){
    int i,count=0;
    for (i=0;chain[i]!='\0';i++){
        if (chain[i]==' '|| chain [i]=='\t' || chain[i]=='\n'){
            count++;
        }
    }
    printf("%d",count);
    
}
int main(){
char chain[50];
    printf("entre votre chain :");
    fgets(chain,sizeof(chain),stdin);
    compture(chain);
}