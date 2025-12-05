#include <stdio.h>

int main() {
    int mat[3][4];  // 3 wiersze, 4 kolumny
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = i + j;
        }
        
    }
       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i", mat[i][j]);
        }
        printf("\n");
    }
    // TODO 1: Wypełnij wartościami i+j
    // mat[0][0]=0, mat[0][1]=1, mat[0][2]=2...
    // mat[1][0]=1, mat[1][1]=2...
    
    
    
    // TODO 2: Wydrukuj w formacie wierszy
    printf("Macierz 3x4:\n");
    
    
    
    return 0;
}
