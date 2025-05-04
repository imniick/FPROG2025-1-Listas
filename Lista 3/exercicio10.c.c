#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opc, sorteio;
    
    srand(time(NULL));
    
    printf("Dados possíveis:\n\n");
    printf("- D4\n");
    printf("- D6\n");
    printf("- D8\n");
    printf("- D10\n");
    printf("- D12\n");
    printf("- D16\n\n");
    
    printf("Informe a quantidade de faces desejada: ");
    scanf("%d", &opc);
    
    if(opc == 4 || opc == 6 || opc == 8 || opc == 10 || opc == 12 || opc == 16){
        sorteio = rand() % opc + 1;
        printf("Você tirou %d\n", sorteio);
    }
    
    else
        printf("Opção inválida!");

    return 0;
}