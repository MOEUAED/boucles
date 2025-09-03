#include<stdio.h>

int main (){

    int n, i, s;

    do {
        printf("Entrer un nombre entier positif : ");
        scanf("%d", &n);
    } while (n < 1);
    s = 0;

    for (i = 1; i <= n; i++) {
        s = s + i;
            printf("%d \n", 2 * i);

    }

    return 0;
}
