#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int r;
    float v;
    printf("enter le rayon : ");
    scanf("%d",&r);

    v = (4/3)* M_PI * r*r*r;
    printf("le volume est : %f",v);
}
