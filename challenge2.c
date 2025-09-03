#include<stdio.h>

int main (){

int a , i, f ;

printf("entrer un nombre : \n ");
scanf("%d",&a);
        f = 1;
if (a < 0 ){
    printf("entrer un nbr positif ");
}else if ( a == 0 ){
    printf("Facteuriel de ce nbr est : 1");
}else {
    for (i = 1 ; i <= a ; i++){

        f = f * i ;
}printf ("la facteuriel de %d est : %d \n" , a ,f);
}

return 0;
}
