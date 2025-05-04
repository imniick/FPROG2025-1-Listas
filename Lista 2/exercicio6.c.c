#include <stdio.h>

int main()
{
    int quantSmart, quantTablet;
    double smartphone = 1000, tablet = 1500;
    
    printf("Digite a quantidade de smartphones vendidos: ");
    scanf("%d", &quantSmart);
    
    printf("Digite a quantidade de tablets vendidos: ");
    scanf("%d", &quantTablet);
    
    double valor = (quantSmart * smartphone) + (quantTablet * tablet);
    
    printf("Total arrecadado: %.2f", valor);

    return 0;
}
