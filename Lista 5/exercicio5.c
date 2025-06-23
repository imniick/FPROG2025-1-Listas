#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int con[30];
    int total = 0, menor = 500, maior = 100, diaMenor = 1, diaMaior = 1;
    
    srand (time(NULL));
    
    for(int i = 0; i < 30; i++){
        con[i] =  100 + rand() % (500 - 100 + 1);
        total += con[i];
    }
    
    for(int i = 0; i < 30; i++){
        if(con[i] < menor){
            menor = con[i];
            diaMenor = i + 1;
        }
        if(con[i] > maior){
            maior = con[i];
            diaMaior = i + 1;
        }
    }
    
    printf("Média de gasto diário: %.2f litros.", total/30.0);
    printf("\n\n");
    printf("Maior consumo de água: dia %d, %d litros.\n", diaMaior, con[diaMaior - 1]);
    printf("Menor consumo de água: dia %d, %d litros.\n", diaMenor, con[diaMenor - 1]);
    
    return 0;
}