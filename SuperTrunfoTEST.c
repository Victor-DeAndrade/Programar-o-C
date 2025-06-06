#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das cidades
    int populacao1, populacao2, PontosT1, PontosT2; 
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2;
    char estado1[3], estado2[3], codcard1 [4], codcard2[4], nomec1[15], nomec2[15];
    
    printf("Digite as iniciais do primeiro estado: \n");
    scanf("%s", estado1);

    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nomec1);

    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao1);  

    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1); 

    printf("Digite quantos pontos turisticos a primeira cidade tem: \n");
    scanf("%d", &PontosT1);

    printf("Designe um codigo para o cartão da primeira cidade(EX: A01): \n");
    scanf("%s", codcard1);

    printf("Digite as iniciais do segundo estado: \n");
    scanf("%s", estado2);   

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nomec2);

    printf("Digite a população da segunda cidade: \n"); 
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos a segunda cidade tem: \n");
    scanf("%d", &PontosT2);

    printf("Designe um codigo para o cartão da segunda cidade(EX: A01): \n");
    scanf("%s", codcard2);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;    
    densidade2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Exibição dos dados das cidades
    printf("\n*** Cartas de Super Trunfo ***\n");

    printf("Carta 1   -   Carta 2\n");
    printf("Estado: %s - %s\n", estado1, estado2);
    printf("Cidade: %s - %s\n", nomec1, nomec2);
    printf("População: %d - %d\n", populacao1, populacao2);
    printf("Área: %.2f - %.2f\n", area1, area2);
    printf("PIB: %.2f - %.2f\n", pib1, pib2);
    printf("Densidade Populacional: %.2f - %.2f\n", densidade1, densidade2);
    printf("PIB per Capita: %.2f - %.2f\n", pibpercapita1, pibpercapita2);
    printf("Pontos Turísticos: %d - %d\n", PontosT1, PontosT2);
    printf("Código do Cartão: %s - %s\n", codcard1, codcard2);

        //Calculo de qual carta venceu mais atributos
    int atributosCarta1 = 0, atributosCarta2 = 0;
    if (populacao1 > populacao2) atributosCarta1++;
    else if (populacao2 > populacao1) atributosCarta2++;
    if (area1 > area2) atributosCarta1++;
    else if (area2 > area1) atributosCarta2++;
    if (pib1 > pib2) atributosCarta1++;
    else if (pib2 > pib1) atributosCarta2++;
    if (densidade1 < densidade2) atributosCarta1++;
    else if (densidade2 < densidade1) atributosCarta2++;
    if (pibpercapita1 > pibpercapita2) atributosCarta1++;
    else if (pibpercapita2 > pibpercapita1) atributosCarta2++;
    if (PontosT1 > PontosT2) atributosCarta1++;
    else if (PontosT2 > PontosT1) atributosCarta2++;
    
    // Exibição do vencedor
    if (atributosCarta1 > atributosCarta2) {
        printf("\nA Carta 1 venceu com %d atributos!\n", atributosCarta1);
    } else if (atributosCarta2 > atributosCarta1) {
        printf("\nA Carta 2 venceu com %d atributos!\n", atributosCarta2);
    } else {
        printf("\nAs cartas empataram!\n");
    }

    // Libera a memória alocada (não é necessário aqui, mas é uma boa prática)
    // Exibição dos dados das cidades
    
    return 0;
     
}
