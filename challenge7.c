#include <stdio.h>

int main() {
    int nbr, inverse = 0;

    printf("Entrer un nombre entier : ");
    scanf("%d", &nbr);

    while(nbr != 0) {
        inverse = inverse * 10 + nbr % 10;
        nbr = nbr / 10;
    }

    printf("Nombre inversé : %d\n", inverse);
    return 0;
}
