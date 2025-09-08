#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre ,unite, dizenne, cent, mill, inverse;

    do{
        printf("Entrer 4 entiers : ");
        scanf("%d",&nombre);
    }while(nombre < 999 || nombre >9999);

    mill =nombre/1000;
    cent =(nombre/100)%10;
    dizenne=(nombre/10)%10;
    unite = nombre%10;

    printf("%d%d%d%d",unite , dizenne,cent, mill);

    /*ou
    inverse=unite*1000+dizenne*100+cent*10+mill;
    printf("%d\n",inverse);*/

    return 0;
}
