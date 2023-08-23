#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void Cesar(char *mensaje, int shift) {
    for (int i = 0; mensaje[i] != '\0'; i++) {
        if (isalpha(mensaje[i])) {
            char base = isupper(mensaje[i]) ? 'A' : 'a';
            mensaje[i] = (mensaje[i] - base + shift) % 26 + base;
        }
    }
}

int main() {
    char mensaje[100];
    int shift;

    printf("Ingrese el mensaje en mayusculas (sin espacios ni caracteres especiales): ");
    scanf("%s", mensaje);

    printf("Ingrese el numero fijo de desplazamiento: ");
    scanf("%d", &shift);

    if (shift < 1 || shift > 25) {
        printf("El numero de desplazamiento debe estar entre 1 y 25.\n");
        return 1;
    }

    Cesar(mensaje, shift);

    printf("El mensaje encriptado es: %s\n", mensaje);

    return 0;
}
