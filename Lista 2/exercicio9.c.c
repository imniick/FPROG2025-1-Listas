#include <stdio.h>

int main()
{
    double valor;
    
    printf("Digite o valor do produto: ");
    scanf("%lf", &valor);
    
    double valorFinal = valor - valor * 0.15;
    
    printf("Valor com desconto: %.2f\n", valorFinal);

    return 0;
}
