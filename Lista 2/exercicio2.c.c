#include <stdio.h>

int main()
{
    int quant;
    double ValDolar;
    
    printf("Digite a cotação do dólar: ");
    scanf("%lf", &ValDolar);
    
    printf("Digite a quantidade de dólares que deseja: ");
    scanf("%d", &quant);
    
    printf("Total de reais a pagar: %.2f", ValDolar * quant);

    return 0;
}