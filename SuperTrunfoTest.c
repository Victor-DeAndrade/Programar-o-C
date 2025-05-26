#include <stdio.h>

int main() {
    
    int populacao1, populacao2, PontosT1, PontosT2;
    float area1, area2, pib1, pib2;
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

    printf("Carta 1   -   Carta 2\n");
    printf("Estado: %s - %s\n", estado1, estado2);
    printf("Cidade: %s - %s\n", nomec1, nomec2);
    printf("População: %d - %d\n", populacao1, populacao2);
    printf("Área: %f - %f\n", area1, area2);
    printf("PIB: %f - %f\n", pib1, pib2);
    printf("Pontos Turísticos: %d - %d\n", PontosT1, PontosT2);
    printf("Código do Cartão: %s - %s\n", codcard1, codcard2);

    return 0;
     
}
