#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,y1,z1,x2,y2,z2;
    float D;
    printf("entrer x1 : ");
    scanf("%d",&x1);

    printf("entrer y1 : ");
    scanf("%d",&y1);

    printf("entrer z1 : ");
    scanf("%d",&z1);

    printf("entrer x2 : ");
    scanf("%d",&x2);

    printf("entrer y2 : ");
    scanf("%d",&y2);

    printf("entrer z2 : ");
    scanf("%d",&z2);

    D=sqrt(pow((x2-x1))+pow((y2-y1))+pow((z2-z1)));
    printf("La distance est : %f",D);

}
