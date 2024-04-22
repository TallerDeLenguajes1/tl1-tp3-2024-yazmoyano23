#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5

int main(){

    char *nombres[MAX]; //Arreglo de punteros
    char *buff; //variable auxiliar
    char *nombre;


    for (int i = 0; i < MAX; i++)
    {
        buff= (char *) malloc(100*sizeof(char));
        printf("Ingrese un nombre: ");
        gets(buff);

        nombre =  (char *) malloc( (strlen(buff) + 1) * sizeof(char)) ;
        strcpy(nombre,buff);

        nombres[i] = nombre;
    }
    

    printf("\n\n---NOMBRES---\n");
    for (int i = 0; i < MAX; i++)
    {
        puts(nombres[i]);
    }

    free(buff);
    for (int i = 0; i < MAX; i++)
    {
        free(nombres[i]);
    }

    return 0;
}