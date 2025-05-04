#include <stdio.h>

int main()
{
    double camiseta = 25, calca = 100, cinto = 40;
    int quantCamisetas, quantCalcas, quantCintos;
    
    printf("Digite a quantidade de camisetas: ");
    scanf("%d", &quantCamisetas);
    
    printf("Digite a quantidade de calças: ");
    scanf("%d", &quantCalcas);
    
    printf("Digite a quantidade de cintos: ");
    scanf("%d", &quantCintos);
    
    double total = (camiseta * quantCamisetas) + (calca * quantCalcas) + (cinto * quantCintos);
    double desconto = total * 0.10;
    double totalFinal = total - desconto;
    
    printf("Desconto aplicado: %.2f\n", desconto);
    printf("Valor final da compra: %.2f\n", totalFinal);

    return 0;
}
