#include <stdio.h>

int main()
{
    float n1, n2, n3, p1, p2, p3;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    
    printf("\nInforme o peso da primeira nota: ");
    scanf("%f", &p1);
    printf("Informe o peso da segunda nota: ");
    scanf("%f", &p2);
    printf("Informe o peso da terceira nota: ");
    scanf("%f", &p3);
    
    float media_ponderada = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
    
    printf("Média ponderada: %.2f\n", media_ponderada);

    return 0;
}
