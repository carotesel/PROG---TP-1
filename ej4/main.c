#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int *vector = NULL;
    int tamanio = 20;

    vector = (int *)calloc(tamanio, sizeof(int));

    for (int i = 0; i < tamanio; i++) {
        vector[i] = rand() % 6;
        printf("[%d] %d ", i,vector[i]);
    }
    printf("\n");

    int *existencia = (int *)calloc(6, sizeof(int)); // Para contar cuántas veces aparece cada número

    for (int i = 0; i < tamanio; i++) {
        existencia[vector[i]]++;
        if (existencia[vector[i]] > 1) {
            vector[i] = -1; // Marcar números repetidos como -1
        }
    }

    printf("Vector sin repetidos:\n");
    for (int i = 0; i < tamanio; i++) {
        if (vector[i] != -1) {
            printf("%d - ", vector[i]);
        }
    }

    free(vector);
    free(existencia);

    return 0;
}
