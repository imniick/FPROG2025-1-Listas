#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    
    for(int i = 1; i <= 15; i++){
        scanf("%d", &b);
        a = a + b;
    }
    
    float med = (float)a/15;
    
    printf("Soma dos valores: %d\nMédia dos valores: %.1f\n", a, med);

    return 0;
}