#include <stdio.h>

int main()
{
    int quantPassaros;
    double quantRacao = 30;
    
    printf("Digite a quantidade de pássaros: ");
    scanf("%d", &quantPassaros);
    
    printf("Quantidade de ração necessária por dia: %.2fg", quantRacao);

    return 0;
}
