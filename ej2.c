#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vecEstatico[500], *vecDinamico = NULL;
    srand(time(NULL));

    vecDinamico = (int *)calloc(11, sizeof(int));

    for (int i = 0; i < 500; i++)
    {
        vecEstatico[i] = rand() % 11;
        vecDinamico[vecEstatico[i]]++;
    }

    for (int i = 0; i < 11; i++)
    {
        printf("El numero %d salio %d veces\n", i, vecDinamico[i]);
    }

    free(vecDinamico); // libero memoria
    vecDinamico = NULL;
    return 0;
}