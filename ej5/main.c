#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shellSort(int *array, int size);

int main() {
    srand(time(NULL));
    int *vector = NULL;
    int tamanio = 20;

    vector = (int *)calloc(tamanio, sizeof(int));

    for (int i = 0; i < tamanio; i++) {
        vector[i] = rand() % 6;
        printf("[%d] %d ", i, vector[i]);
    }
    printf("\n");

    int *existencia = (int *)calloc(6, sizeof(int)); // Para contar cuántas veces aparece cada número

    for (int i = 0; i < tamanio; i++) {
        existencia[vector[i]]++;
        if (existencia[vector[i]] > 1) {
            vector[i] = -1; // Marcar números repetidos como -1
        }
    }

    shellSort(vector, tamanio); // Ordenar el vector (incluyendo los -1)

    printf("Vector sin repetidos y ordenado:\n");
    for (int i = 0; i < tamanio; i++) {
        if (vector[i] != -1) {
            printf("%d - ", vector[i]);
        }
    }

    free(vector);
    free(existencia);

    return 0;
}

void shellSort(int *array, int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = array[i];
            int j;
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
    }
}
