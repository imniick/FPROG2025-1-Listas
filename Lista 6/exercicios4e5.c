#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[4][6], somaL2 = 0, somaC5 = 0, somaM = 0, somaP = 0, somaI = 0;
    
    srand(time(NULL));
    
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 6; j++)
            m[i][j] = -10 + rand() % 21;
            
    printf("Matriz sorteada:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++)
            printf("%d ", m[i][j]);
            
        printf("\n");
    }    
    
    printf("\n");
    
    for(int i = 0; i < 6; i++){
        somaL2 += m[1][i];
    }
    
    printf("Soma dos elementos da segunda linha: %d\n", somaL2);
    
      
    for(int i = 0; i < 4; i++){
        somaC5 += m[i][4];
    }
    
    printf("Soma dos elementos da quinta coluna: %d\n", somaC5);
    
    for(int i = 0; i < 6; i++){
        somaM += m[0][i] * m[3][i];
    }
    
    printf("Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha: %d\n", somaM);
    
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 6; j++){
            if(j % 2 == 0)
                somaP += m[i][j];
                
            if(i % 2 != 0)
                somaI += m[i][j];
        }
    
    printf("Soma dos elementos das colunas com índices pares: %d\n", somaP);
    printf("Soma dos elementos das linhas com índices ímpares: %d\n", somaI);
    
    int menor = m[0][0], maior = m[0][0];
    
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 6; j++){
            if(m[i][j] > maior)
                maior = m[i][j];
                
            if(m[i][j] < menor)
                menor = m[i][j];
        }
            
    printf("\n");
                
    printf("Maior valor da matriz: %d\n", maior);
    printf("Menor valor da matriz: %d\n", menor);
    
    return 0;
}