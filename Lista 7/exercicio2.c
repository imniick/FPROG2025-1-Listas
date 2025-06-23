#include <stdio.h>

void tabuada(int val){

    printf("Tabuada de %d:\n\n", val);
    for(int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", val, i, val * i);
    
}

int main()
{
    int val;
    
    printf("Digite um valor: ");
    scanf("%d", &val);
    
    tabuada(val);

    return 0;
}
