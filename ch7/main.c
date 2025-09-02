#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first,second,third;
    float M;

    printf("entrer le premier nombre :");
    scanf("%d",&first);

    printf("entrer la deuxieme nombre :");
    scanf("%d",&second);

    printf("entrer le troixieme nombre :");
    scanf("%d",&third);

    M=(first*2 + second*3 + third*5)/(2+3+5);
    printf("le moyenne est = %.2f",M);
}
