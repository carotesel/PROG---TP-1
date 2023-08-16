#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[30], *caDinam = NULL;
    int tam = 0;

    printf("Ingrese un string: ");
    fflush(stdin);
    gets(cadena);

    tam = strlen(cadena);
    caDinam = (char *)malloc(tam);

    if (caDinam != NULL)
    {

        strcpy(caDinam, cadena);

        printf("\nPalabra en dinam: %s", caDinam);
    }

    return 0;
}