#include <stdio.h>

int main()
{
    int v1[5] = {1, 5, 9, 2, 5}, v2[5] = {7, 4, 13, 21, 6}, v3[5] = {8, -3, 5, 7, 12}, m[3][5];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++)
            switch(i){
                case 0:
                    m[i][j] = v1[j];
                    break;
                case 1:
                    m[i][j] = v2[j];
                    break;
                case 2:
                    m[i][j] = v3[j];
                    break;
            }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++)
            printf("%d ", m[i][j]);
        
        printf("\n");
    }
    
    printf("\n");
    
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            printf("%d x 7 = %d\n", m[i][j], m[i][j] * 7);

    return 0;
}