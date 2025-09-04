#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmh , ms;

    printf("entrer en Km/h : ");
    scanf("%f",&kmh);

    ms = kmh * 0.27778;
    printf("votre ms est : %f",ms);
}
