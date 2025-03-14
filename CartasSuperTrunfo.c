#include <stdio.h>

int main(){
    //TEMA 1 - DESAFIO SUPER TRUNFO PAISES "NOVATO"
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.

    char estado,estado2;
    char codigo[20],codigo2[20];
    char cidade[40],cidade2[40];
    int populacao,populacao2;
    float area,area2;
    float Pib,Pib2;
    int pontosturistico,pontosturistico2;

    // CARTAS 1

    printf("digite seu Estado de 'A'a'H' :\n");
    scanf(" %c",&estado);

    printf("codigo :\n");
    scanf("%s",codigo);

    printf("nome da Cidade :\n");
    scanf("%s",cidade);

    printf("populacao :\n");
    scanf("%d",&populacao);

    printf("Area :\n");
    scanf("%f",&area);

    printf("pib :\n");
    scanf("%f",&Pib);

    printf("numero de pontos turisticos :\n");
    scanf("%d",&pontosturistico);

    // CARTAS 2 

    printf("digite seu Estado de 'A'a'H':\n");
    scanf(" %c",&estado2);

    printf("codigo :\n");
    scanf("%s",codigo2);

    printf("nome da Cidade :\n");
    scanf("%s",cidade2);

    printf("populacao :\n");
    scanf("%d",&populacao2);

    printf("Area :\n");
    scanf("%f",&area2);

    printf("pib :\n");
    scanf("%f",&Pib2);

    printf("numero de pontos turisticos :\n");
    scanf("%d",&pontosturistico2);

    printf("\n");
    printf("Cartas1!\n");


    printf("estado:%c\n",estado);
    printf("Codigo:%s\n",codigo);
    printf("Cidade:%s\n",cidade);
    printf("Populacao:%d\n",populacao);
    printf("Area:%f\n",area);
    printf("PIB:%f\n",Pib);
    printf("Pontos Turisticos:%d\n",pontosturistico);

    printf("\n");
    printf("Cartas2!\n");


    printf("estado:%c\n",estado2);
    printf("Codigo:%s\n",codigo2);
    printf("Cidade:%s\n",cidade2);
    printf("Populacao:%d\n",populacao2);
    printf("Area:%f\n",area2);
    printf("PIB:%f\n",Pib2);
    printf("Pontos Turisticos:%d\n",pontosturistico2);

    return 0;
}
