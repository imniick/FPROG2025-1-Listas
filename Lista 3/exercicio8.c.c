#include <stdio.h>

int main()
{
    double val;
    
    printf("Digite o valor do produto: R$ ");
    scanf("%lf", &val);
    
    if(val <= 20.00)
        printf("Valor final do produto: R$ %.2f\n", val * (1 + 0.45));
        
    else if(val > 20.00 && val <= 50.00)
        printf("Valor final do produto: R$ %.2f\n", val * (1 + 0.35));
        
    else
        printf("Valor final do produto: R$ %.2f\n", val * (1 + 0.25));

    return 0;
}