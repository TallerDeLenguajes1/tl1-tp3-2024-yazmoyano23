#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 12

void cargarMatriz(float *p_matriz);
void mostrarMatriz(float *p_matriz);
void promedio_ganancia(float *p_matriz);

int main(){
    srand(time(NULL));
    float ganancias[N][M] ;
    float *puntero ;
    puntero= &ganancias[0][0] ;

    cargarMatriz(puntero);
    mostrarMatriz(puntero);
    promedio_ganancia(puntero);

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
        for (int j = 0; j < M; j++)  //pasa por todas las columnas
        { 
            printf("%2.f ", *(p_matriz + (i * M + j)));
        }
        printf("\n");
        
    }
}

//c. Saque el promedio de ganancia por año y muestrelos por pantalla

void promedio_ganancia(float *p_matriz){

    float sum, promedio_anual;

    for (int i = 0; i < N; i++) 
    {
        sum = 0, promedio_anual = 0; //suma esta en 0 en la primera fila
        for (int j = 0; j < M; j++)  //pasa por todas las columnas-años
        { 

            sum = sum + *(p_matriz + (i * M + j));

        }
        promedio_anual = sum / 12;
        printf("\nPromedio ganancia anio %d : %2.f", i + 1, promedio_anual);
        
    }
    
}

// PUNTO 3 : char es un vector dinamico con 5 nombres (el dibujo esta mal)