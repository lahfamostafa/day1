#include <stdio.h>
#include <stdlib.h>

void binaire(int n){
        int bits[32];
        int i=0,j;

        if(n==0){
            printf("0");
            return;
        }

        while(n>0){
            bits [i]=n%2;
            n = n / 2 ;
            i++;
        }

        for( j = i - 1 ; j >= 0; j--)
            printf("%d",bits[j]);
    }

int main()
{
    int decimale;

    printf("Entrer un nombre decimale : ");
    scanf("%d",&decimale);

    printf("En hexadecimale : %x\n",decimale);
    printf("En binaire : ");
    binaire(decimale);
    printf("\n");



    return 0;
}
