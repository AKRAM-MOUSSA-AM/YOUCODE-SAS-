#include <stdio.h>
int est_paire(int n){
    if(n%2==0){
        return 1;
}  
else  {
    return 0;
}
}
int main() {
    int n;
    printf("entre le nombre : ");
    scanf("%d",&n);

    if(est_paire(n)){
        printf("le nombre %d est paire",n);
    }else{
        printf("le nombre %d est impaire ",n);
    }
}

