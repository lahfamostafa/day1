#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char Op;
    printf("Entrer la premier valeur :");
    scanf("%f",&a);

    printf("Entrer l'operateur :");
    scanf(" %c",&Op);

    printf("Entrer la deuxieme valeur :");
    scanf("%f",&b);

    switch(Op){
        case '+':
        printf("%.2f + %.2f = %.2f", a,b, a+b);
        break;

        case '-':
        printf("%.2f - %.2f = %.2f", a,b, a-b);
        break;

        case '*':
        printf("%.2f * %.2f = %.2f", a,b, a*b);
        break;

        case '/':
        printf("%.2f / %.2f =  %.2f", a,b, a/b);
        break;

        default :
            printf("operateur inconnu");
    }
    return 0;
}
