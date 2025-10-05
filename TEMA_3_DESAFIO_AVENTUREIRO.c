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


int escolhaAtributo; // Variável para guardar a escolha do usuário no menu

    printf(" *** Super Trunfo de Países ***\n\n");

    printf("\nCarta 1: %s\n", Nome_do_Pais1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos1);
    printf("Densidade demográfica: %.2f hab/km²\n", Densidade_Demografica1);

    printf("\nCarta 2: %s\n", Nome_do_Pais2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade demográfica: %.2f hab/km²\n", Densidade_Demografica2);

    //MENU INTERATIVO
    printf("\n Escolha o atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolhaAtributo); // Lê a escolha do usuário
    
    printf("\n *** Resultado da Comparação ***\n");
    printf("Países: %s vs %s\n", Nome_do_Pais1, Nome_do_Pais2);

   switch (escolhaAtributo) {
        case 1: // Se o usuário escolher "Populacao"
            printf("Atributo: População\n");
            printf("%s: %d | %s: %d\n", Nome_do_Pais1, Populacao1, Nome_do_Pais2, Populacao2);
            if (Populacao1 > Populacao2) { // Se a população do país 1 for maior
                printf("Vencedor: Carta 1 - %s (com mais população!)\n", Nome_do_Pais1);
            } else if (Populacao1 < Populacao2) { // Se a população do país 2 for maior
                printf("Vencedor: Carta 2 - %s (com mais população!)\n", Nome_do_Pais2);
            } else { // Se forem iguais
                printf("Empate!\n");
            }
            break; // Termina o 'case 1'
        

    


}