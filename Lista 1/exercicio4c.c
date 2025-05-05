#include <stdio.h>

int main()
{
    float tempo1, tempo2, velocidade1, velocidade2;
    
    printf("Informe o tempo gasto no primeiro trecho: ");
    scanf("%f", &tempo1);
    printf("Informe a velocidade com a qual percorreu o primeiro trecho: ");
    scanf("%f", &velocidade1);
    
    printf("\nInforme o tempo gasto no segundo trecho: ");
    scanf("%f", &tempo2);
    printf("Informe a velocidade com a qual percorreu o segundo trecho: ");
    scanf("%f", &velocidade2);
    
    float distancia_total = tempo1 * velocidade1 + tempo2 * velocidade2;
    
    printf("Distância total percorrida: %.2f\n", distancia_total);

    return 0;
}
