#include <stdio.h>

int main()
{
    float preco_original;
    
    printf("Informe o preço do produto: ");
    scanf("%f", &preco_original);
    
    float preco_final = preco_original + preco_original * 0.10 - 5;
    
    printf("Preço final: %.2f\n", preco_final);

    return 0;
}