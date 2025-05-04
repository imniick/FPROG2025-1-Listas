#include <stdio.h>

int main()
{
    double val = 40.00, peso;
    
    printf("Digite o peso do prato em Kg: ");
    scanf("%lf", &peso);
    
    printf("Valor a pagar: %.2f", peso * val);

    return 0;
}