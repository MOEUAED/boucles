#include <stdio.h>

int main() {
    int n, c = 0;
    
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n == 0) {
        c = 1;
    } else {
        while (n > 0) {
            c++; 
            n = n / 10; 
        }
    }

    printf("Le nombre de chiffres est : %d\n", c);

    return 0;
}

