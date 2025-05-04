#include <stdio.h>

int main()
{
    double val;
    int opc;
    
    printf("Digite o valor do produto: ");
    scanf("%lf", &val);
    
    printf("\nSelecione a forma de pagamento:\n\n");
    printf("1 - À vista em dinheiro\n");
    printf("2 - À vista no cartão de crédito\n");
    printf("3 - Em duas vezes no cartão de crédito\n");
    printf("4 - Em três vezes no cartão de crédito\n");
    scanf("%d", &opc);
    
    if(opc == 1)
        printf("Valor à vista em dinheiro: %.2f", val * 0.15);
        
    if(opc == 2)
        printf("Valor à vista no cartão de crédito: %.2f", val * 0.10);
        
    if(opc == 3)
        printf("Valor em duas vezes no cartão de crédito: %.2f", val);
        
    if(opc == 4)
        printf("Valor em três vezes no cartão de crédito: %.2f", val * (1 + 10.00/100));

    return 0;
}
