#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {
    char input[1000];  
    system("cls");
    printf("Ingresa una cadena de texto: \n");
    fgets(input, sizeof(input), stdin);

    int longitud = strlen(input);
    if (longitud > 0 && input[longitud - 1] == '\n') {
        input[longitud - 1] = '\0';
        longitud--;
    }

    printf("La cadena ingresada tiene %d caracteres.\n", longitud);

    return 0;
}
