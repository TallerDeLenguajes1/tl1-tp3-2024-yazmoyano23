#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 12

void cargarMatriz(float *p_matriz);
void mostrarMatriz(float *p_matriz);
void promedioGanancia(float *p_matriz);
void obtenerGananciaMaxMin(float *p_matriz);

int main(){
    srand(time(NULL));
    float ganancias[N][M] ;
    float *puntero ;
    puntero= &ganancias[0][0] ;

    cargarMatriz(puntero);
    mostrarMatriz(puntero);
    promedioGanancia(puntero);
    obtenerGananciaMaxMin(puntero);

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

void promedioGanancia(float *p_matriz){

    float sum, promedio_anual;

    for (int i = 0; i < N; i++) 
    {
        sum = 0, promedio_anual = 0; //se inicializa la suma y el promedio para cada año
        for (int j = 0; j < M; j++)  //pasa por todas las columnas-años
        { 

            sum = sum + *(p_matriz + (i * M + j));

        }
        promedio_anual = sum / 12;
        printf("\nPromedio ganancia anio %d : %2.f", i + 1, promedio_anual);
        
    }
    
}

void obtenerGananciaMaxMin(float * p_matriz){   

    int max_i = 0, max_j = 0, min_i = 0, min_j = 0;
    float max, min ; 
    max = *(p_matriz);
    min = *(p_matriz);


    for (int i = 0; i < N; i++)
    {
       for (int j = 0; j < M; j++)
       {
            if ( *(p_matriz + (i * M + j))  > max)
            {
                max_i = i; //año
                max_j = j; //mes
                max = *(p_matriz + (i * M + j));
            }

            if ( *(p_matriz + (i * M + j)) < min)
            {
                min_i = i;
                min_j = j;
                min = *(p_matriz + (i * M + j));
            }          
       }
    }  
    printf("\n\nGanancia maxima: %2.f  Anio: %d  Mes: %d", max, max_i + 1, max_j + 1);
    printf("\nGanancia minima: %2.f  Anio: %d  Mes: %d", min, min_i + 1, min_j + 1);  
}


// PUNTO 3 : char es un vector dinamico con 5 nombres (el dibujo esta mal)