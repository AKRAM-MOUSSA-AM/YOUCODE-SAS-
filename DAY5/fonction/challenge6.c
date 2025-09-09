#include <stdio.h>

int  fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    int a = 0, b = 1, c;
    int i;

    printf("Entrez la valeur de n: ");
    scanf("%d", &n);

    if(n <= 0){ 
        printf("Veuillez entrer un nombre positif.\n");
    } else {
        printf("Suite de Fibonacci (%d termes):\n", n);

        for(i = 0; i < n; i++){
            if(i == 0){
                printf("%d ", a);
            } else if(i == 1){
                printf("%d ", b);
            } else {
                c = a + b;
                printf("%d ", c);
                a = b;
                b = c;
            }
        }
        printf("\n");

        printf("Le terme F(%d) de Fibonacci est : %d\n", n, fibonacci(n));
    }

}