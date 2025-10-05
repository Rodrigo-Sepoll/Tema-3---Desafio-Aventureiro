#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     
    printf("TEMA 3 - DesafioSuper Trunfo C - Nível Aventureiro!\n\n");

    //Declaração de variáveis para a Carta 1
    int Carta1[20];
    char Nome_do_Pais1[20];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;
    float Densidade_Demografica1;

    //Declarão de variáveis para a Carta 2
    int Carta2[20];
    char Nome_do_Pais2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;
    float Densidade_Demografica2;

    //Dados das duas cartas dos Países, como se tivessem sido cadastradas.

    strcpy(Nome_do_Pais1, "Brasil");
    Populacao1 = 12325000; // Número de Habitante
    Area1 = 1521.11; // em km²
    PIB1 = 699.28; // bilhões de reais
    Pontos_Turisticos1 = 50; // Número de pontos turísticos
    Densidade_Demografica1 = 8102.64;

    strcpy(Nome_do_Pais2, "Paraguai");
    Populacao2 = 6748000; // Número de Habitante
    Area2 = 1200.25; // em km²
    PIB2 = 300.50; // bilhões de reais
    Pontos_Turisticos2 = 50; // Número de pontos turísticos
    Densidade_Demografica2 = 5622.16;




}