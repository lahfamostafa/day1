#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20] , prenom[20] , adresse[20], sexe[10];
    int age;

    printf("entrez votre nom : ");
    scanf("%s",nom);

    printf("entrez votre prenom : ");
    scanf("%s",prenom);

    printf("entrez votre sexe : ");
    scanf("%s",sexe);

    printf("entrez votre age : ");
    scanf("%d",&age);

    printf("entrez votre adresse : ");
    scanf("%s",adresse);

    printf("votre infos sont : \n%s \n%s \n%s \n%d \n%s",nom,prenom,sexe,age,adresse );
}
