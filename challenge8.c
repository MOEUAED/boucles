#include <stdio.h>

int main() {
    int n, i ,f , a=0,b=1;
    
    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    scanf("%d", &n);



    printf("Suite de Fibonacci : ");

    for(i = 0; i < n; i++) {
        if(i == 0) {
            printf("%d", a); 
        } else if(i == 1) {
            printf(", %d", b);
        } else {
            f = a + b; 
            printf(", %d", f);
            a = b;
            b = f;
        }
    }

    printf("\n");
    return 0;
}

