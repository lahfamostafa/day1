#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    printf("enter la temperature d'eau : ");
    scanf("%d",&T);

    if(T<0){
        printf("Solide (glace)");
    }else if(0<=T && T<100){
        printf("liquide (eau)");
    }else
        printf("gar (valeu)");

}
