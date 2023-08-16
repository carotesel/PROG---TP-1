#include <stdio.h>
#include <stdlib.h>

int main()
{
    // malloc

    int *puntero = NULL, count = 0;

    // llenar hasta q no pueda mas la memoria

    do
    {
        puntero = (int *)malloc(1000000);
        count += 1;
    } while (puntero != NULL);

    if (puntero == NULL)
    {
        printf("\n Memoria NO disponible! tamanio %d", count * 100);
    }

    free(puntero); // libero memoria
    puntero = NULL;

    return 0;
}