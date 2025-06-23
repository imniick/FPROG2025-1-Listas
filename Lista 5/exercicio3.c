#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, quant[6] = {0, 0, 0, 0, 0, 0};
    
    printf("Número de vezes que o dado será jogado: ");
    scanf("%d", &n);
    
    printf("\n");
    
    srand(time(NULL));
    
    for(int i = 1; i <= n; i++){
        int face = 1 + rand() % 6;
        quant[face - 1]++;
    }
    
    printf("Percentual de resultado de cada face do dado:\n\n");
    for(int i = 0; i < 6; i++){
        printf("face %d: %.1f%%\n", i + 1, ((double) quant[i] / n) * 100.0);
    }

    return 0;
}