#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lang,lar,S;
    printf("entrer la longueur : ");
    scanf("%d",&lang);

    printf("entrer la largeur : ");
    scanf("%d",&lar);

    S=lang*lar;
    printf("la surface est : %d",S);
}
