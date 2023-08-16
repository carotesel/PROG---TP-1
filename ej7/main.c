#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Haga un programa que le permita al usuario ingresar 10 valores enteros por teclado.
Dichos valores deberán ser almacenados en la memoria dinámica, pero luego, se debe
ampliar a 20 elementos, considerando el siguiente algoritmo:
• Vector[10]=vector[9]*2
• Vector[11]=vector[8]*2
• Vector[12]=vector[7]*2
…………………………….
Vector [J] = vector[i]*2*/

    int *vecDinamico = NULL, *vecNuevo = NULL, tam = 10, nuevoTam = 20;

    vecDinamico = (int *)calloc(tam, sizeof(int));

    for (int i=0; i<tam; i++){
        printf("Ingrese valor %d: ", i+1);
        scanf("%d", &vecDinamico[i]);
    }

    vecNuevo = (int *)realloc(vecDinamico, nuevoTam * sizeof(int));

     if (vecNuevo != NULL) {
        int aux = tam;
        for (int i = tam; i < nuevoTam; i++) {
            vecNuevo[i] = vecDinamico[aux-1] * 2;
            aux--;
        }

        printf("El vector ampliado:\n");
        for (int i = 0; i < nuevoTam; i++) {
            printf("[%d] %d\n", i, vecNuevo[i]);
        }

        free(vecDinamico); // Liberar la memoria dinámica
        free (vecNuevo);
    } else {
        perror("Error al asignar memoria dinámica");
    }

    return 0;
}
