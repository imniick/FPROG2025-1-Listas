#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double m[10][3];
    
    srand(time(NULL));
    
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 2; j++)
            m[i][j] = (rand() % 1001) / 100.0;
                  
    for(int i = 0; i < 10; i++)        
        m[i][2] = (m[i][0] + m[i][1] * 2.0) / 3.0;        
    
    printf("           Grau A | Grau B | Grau Parcial\n"); 
    for(int i = 0; i < 10; i++){
        printf("Aluno %d  |", i+ 1);
        for(int j = 0; j < 3; j++)
            printf("    %.1f  ", m[i][j]);
        
        printf("\n");
    }
    return 0;
}
