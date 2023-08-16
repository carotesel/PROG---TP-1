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

   if (caDinam != NULL){
    int contador = 0;
   strcpy(caDinam, cadena);


    for (int i = 0; i < tam; i++) {
        char c = tolower(caDinam[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("\nLa cadena ingresada tiene %d vocales", contador);
   }

   free(caDinam);

    return 0;
}
