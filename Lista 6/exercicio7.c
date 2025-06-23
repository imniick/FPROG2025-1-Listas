#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[5][5];
    
    srand(time(NULL));
    
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            m[i][j] = -100 + rand() % 201;
            
    printf("Matriz sorteada:\n\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            printf("%d ", m[i][j]);
            
        printf("\n");
    }
    
    printf("\n");
    
    printf("Matriz com os sinais invertidos:\n\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int a = m[i][j] * (-1);
            printf("%d ", a);
        }    
        printf("\n");
    }
    
    return 0;
}