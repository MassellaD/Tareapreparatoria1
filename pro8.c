#include <stdio.h>
#include <string.h>

int main() {
    char entrada[100];  

    printf("Ingresa una palabra: ");
    scanf("%s", entrada);  

    int len = strlen(entrada);  

    printf("La palabra duplicada es: ");
    for (int i = 0; i < len; i++) {
        printf("%c%c", entrada[i], entrada[i]);  
    }
    printf("\n");

    return 0;
}
