#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 12

int main(){

    float ganancias[N][M] ;
    float *puntero ;
    puntero= &ganancias[0][0] ;

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)  
        {
            *(puntero + (i * M + j)) = 1 + rand()%100; // num[i][j] = *(ptr + (i * no_of_cols + j)) 
            printf("%4d ", *(puntero + (i * M + j)));
        }
        printf("\n");
        
    }

    
    return 0;
}