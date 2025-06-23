#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(int inicio, int fim){
    
    srand(time(NULL));
    
    int valor = inicio + rand() % (fim - inicio + 1);
    
    return valor;
}

int main()
{
    int inicio, fim;
    
    printf("Informe o início do intervalo: ");
    scanf("%d", &inicio);
    
    printf("Informe o fim do intervalo: ");
    scanf("%d", &fim);
    
    printf("Número sorteado: %d\n", sorteio(inicio, fim));

    return 0;
}