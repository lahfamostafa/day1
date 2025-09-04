#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    float M;

    printf("entrer l premier nombre : ");
    scanf("%d",&a);

    printf("entrer le deuxieme nombre : ");
    scanf("%d",&b);

    printf("entrer le troixieme nombre : ");
    scanf("%d",&c);

    M= cbrt(a*b*c);
    printf("la moyenne geometrique est : %f",M);
}
