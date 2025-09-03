#include<stdio.h>

int main (){

int a , i ;

printf("entrer un nombre : \n ");
scanf("%d",&a);


for (i = 1 ; i <= 10 ; i++){

if (a == 0){
    printf("changer le nombre");
    return 0 ;
}else {
    printf("%d x %d = %d \n", a , i , a*i);
}

}

return 0;
}
