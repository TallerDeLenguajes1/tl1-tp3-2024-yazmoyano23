#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 12

void cargarMatriz(float *p_matriz);
void mostrarMatriz(float *p_matriz);

int main(){
    srand(time(NULL));
    float ganancias[N][M] ;
    float *puntero ;
    puntero= &ganancias[0][0] ;

    cargarMatriz(puntero);
    mostrarMatriz(puntero);
    

    return 0;
}

void cargarMatriz(float *p_matriz){

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)  
        {
            *(p_matriz + (i * M + j)) = rand() %  40001 + 10000;  
        }
        
    }
}

void mostrarMatriz(float *p_matriz){
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)  
        { 
            printf("%2.f ", *(p_matriz + (i * M + j)));
        }
        printf("\n");
        
    }
}