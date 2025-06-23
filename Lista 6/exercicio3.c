#include <stdio.h>

int main()
{
    int mI[4][4];
    
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++){
            if(i == j)
                mI[i][j] = 1;
            else
                mI[i][j] = 0;
        }
        
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++)
            printf("%d ", mI[i][j]);
        
        printf("\n");
    }
    
    return 0;
}
