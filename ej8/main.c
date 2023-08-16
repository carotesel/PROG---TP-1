#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena1[30], cadena2[30], *caDinam = NULL;
    int tam1 = 0, tam2 = 0;

    printf("Ingrese la primera cadena: ");
    fflush(stdin);
    gets(cadena1);

    printf("Ingrese la segunda cadena: ");
    fflush(stdin);
    gets(cadena2);

    tam1 = strlen(cadena1);
    tam2 = strlen(cadena2);

    caDinam = (char *)malloc(tam1 + tam2 + 2); // +2 para espacio y carácter nulo

    if (caDinam != NULL) {
        strcpy(caDinam, cadena1);
        strcat(caDinam, " "); // Agregar espacio entre las cadenas
        strcat(caDinam, cadena2);

        printf("\nCadenas unificadas en memoria dinámica: %s\n", caDinam);

        free(caDinam);
    } else {
        perror("Error al asignar memoria dinámica");
    }

    return 0;
}
