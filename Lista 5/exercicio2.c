#include <stdio.h>

int main()
{
    int val[5];
    
    for(int i = 0; i < 5; i++){
        printf("Insira o valor da posição %d: ", i);
        scanf("%d", &val[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < 5; i++)
        printf("%d x %d = %d\n", i, val[i], i * val[i]);

    return 0;
}