#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int pts[4] = {0, 0, 0, 0};
    
    srand(time(NULL));
    
    for(int i = 1; i <= 5; i++){
        for(int j = 0; j < 4; j++){
            int ptsR = 0 + rand() % 101;
            pts[j] += ptsR;
            
            if(ptsR >= 80)
                printf("Jogador %d - Rodada de Destaque!\n\n", j + 1);
        }
    }
    
    printf("\nPontuações finais:\n\n");
    for(int i = 0; i < 4; i++){
        printf("Jogador %d: %d\n", i + 1, pts[i]);
    }
    
    int maior = pts[0], cont = 0;
    
    for(int i = 0; i < 4; i++)
        if(pts[i] > maior)
            maior = pts[i];
            
    for(int i = 0; i < 4; i++)
        if(pts[i] == maior)
            cont++;
            
    if(cont == 1){
        printf("\n");
        for(int i = 0; i < 4; i++){
            if(pts[i] == maior)
                printf("Vencedor: Jogador %d!\n", i + 1);
        }
    }
    else{
        printf("\n");
        printf("Houve empate entre %d jogadores!\n", cont);
    }

    return 0;
}