#include<stdio.h>

int main (){

int x , p , n ,i;

printf("entrer le nbr ");
scanf("%d",&n);

printf("entrer le power ");
scanf("%d",&p);

 x = 1;
if (p == 0){
    printf("le nombre = 1 ");
}else{
 for (i = 1 ; i <= p ; i++){
        x *= n ;
 }
        printf("%d ^  %d  =  %d ",n , p , x);

}

return 0;
}
