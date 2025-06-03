#include <stdio.h>

int main() {
   float nota1, nota2, nota3, nota4;
   float media;

   printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite a primeira nota: \n");   
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");    
    scanf("%f", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    printf("Digite a nota de atividade complementar: \n"); 
    scanf("%f", &nota4);
    
    //A média é a média aritmética das três primeiras notas mais a nota de atividade complementar    
    media = (nota1 + nota2 + nota3) / 3 + (nota4);    
    // Exibe o resultado   
    printf("A média é: %.1f\n", media);

    if (media >= 7) {
        printf("Aprovado!\n");

    } else if (media >= 5) {
        printf("Recuperação!\n");
    
    }
    return 0;
  
}   
