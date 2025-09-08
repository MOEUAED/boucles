#include <stdio.h>

int main() {
    int n,i, s = 0;

    printf("Entrez un entier positif n : ");
    scanf("%d", &n);

    printf("Calcul de la somme des %d premiers entiers :\n", n);

    for(i = 1; i <= n; i++) {
        s = s+ i; 
        printf("Apres avoir ajoute %d, somme = %d\n", i, s);
    }

    printf("La somme totale des %d premiers entiers est : %d\n", n, s);

    return 0;
}

