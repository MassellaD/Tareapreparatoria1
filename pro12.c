#include <stdio.h>

int main() {
    double miporg;
    
    printf("Ingrese la cantidad de millas por galon: ");
    scanf("%lf", &miporg);
    
    double kmporL = miporg * 1.60934 / 4.54609;

    printf("La cantidad de kilometros por litro es: %.2lf\n", kmporL);
    
    return 0;
}
