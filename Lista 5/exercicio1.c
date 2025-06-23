#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v[10], v2[10], vPares[10], vImpares[10];
    int soma = 0, cont50 = 0;
    long long int prod = 1;
    int maior = 10, menor = 90;
    int quantPares = 0, quantImpares = 0;
    
    srand (time (NULL));
    
    for(int i = 0; i < 10; i++){
        v[i] = 10 + rand() % (90 - 10 + 1);
        printf("V[%d]: %d\n", i, v[i]);
        soma += v[i];
        prod *= v[i];
    }
        
    for(int i = 0; i < 10; i++){
        if(v[i] == 50){
            printf("\n\nO vetor contém o valor 50!");
            cont50 += 1;
        }
    }
    
    if(cont50 == 0)
    printf("\n\nO vetor não contém o valor 50!");
     
    
    for(int i = 0; i < 10; i++){
        if(v[i] > maior)
            maior = v[i];
        
        if(v[i] < menor)
            menor = v[i];
    }
    
    printf("\nQuantidade de ocorrências do valor 50 no vetor: %d\n", cont50);
    printf("\nMédia dos valores do vetor: %.1f\n", soma/10.0);        
    printf("\nMaior valor do vetor: %d\nMenor valor do vetor: %d", maior, menor);
    printf("\n\nSoma acumulada dos valores do vetor: %d\nProduto acumulado dos valores do vetor: %lld\n\n", soma, prod);
    
    for(int i = 9; i >= 0; i--)
        printf("v[%d]: %d\n", i, v[i]);
        
    printf("\n");
        
    for(int i = 0; i < 10; i++){
        v2[i] = v[9 - i];
        printf("v2[%d]: %d\n", i, v2[i]);
    }        
    
    printf("\n");
    
    for(int i = 0; i < 10; i++){
        if(v[i] % 2 == 0){
            vPares[quantPares] = v[i];
            quantPares++;
        }
        else{
            vImpares[quantImpares] = v[i];
            quantImpares++;
        }
    }
    
    printf("Elementos pares:\n");
    for(int i = 0; i < quantPares ; i++){
        printf("%d ", vPares[i]);
    }
    
    printf("\n\n");
    
    printf("Elementos ímpares:\n");
    for(int i = 0; i < quantImpares ; i++){
        printf("%d ", vImpares[i]);
    }
    
    printf("\n");
    
    return 0;
}