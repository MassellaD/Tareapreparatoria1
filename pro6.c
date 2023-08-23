#include <stdio.h>
#include <stdlib.h> 

int contarpar(int inicial, int final) {
    int pares = 0;
    for (int numero = inicial; numero <= final; numero++) {
        if (numero % 2 == 0) {
            pares++;
        }
    }
    return pares;
}

int main() {
    int numeroInicial, numeroFinal;
    system("cls");
    printf("Ingrese el numero inicial: ");
    scanf("%d", &numeroInicial);

    printf("Ingrese el numero final: ");
    scanf("%d", &numeroFinal);

    if (numeroInicial <= numeroFinal) {
        int pares = contarpar(numeroInicial, numeroFinal);
        printf("La cantidad de numeros pares en el rango [%d, %d] es: %d\n", numeroInicial, numeroFinal, pares);
    } else {
        printf("El numero inicial debe ser menor o igual al numero final.\n");
    }

    return 0;
}

