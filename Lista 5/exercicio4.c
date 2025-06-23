#include <stdio.h>

int main()
{
    int passos[7];
    int cont = 0;
    
    for(int i = 0; i < 7; i++){
        printf("Digite a quantidade de passos dados no dia %d: ", i + 1);
        scanf("%d", &passos[i]);
        cont += passos[i];
    }
    
    printf("\n");
    printf("Média de passos da semana: %.2f", cont/7.0);
    printf("\n\n");
    printf("Meta de passos diários: 10.000\n\nDias em que a meta foi alcançada:\n");
    
    for(int i = 0; i < 7; i++)
        if(passos[i] == 10000 || passos[i] > 10000)
            printf("Dia %d\n", i + 1);
            
    printf("\n");
    

    return 0;
}
