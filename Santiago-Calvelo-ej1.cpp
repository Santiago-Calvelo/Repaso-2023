#include <stdio.h>

int main(void) {
    int n;
    int costo = 0;

    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &n);

    if (n >= 100) {
        costo = 500;
        printf("El alquiler es de %d, y cada alumno debe pagar %d", costo*n, costo);
    }
    if (n >= 50 && n <= 99) {
        costo = 400;
        printf("El alquiler es de %d, y cada alumno debe pagar %d", costo*n, costo);
    }
    if (n >= 30 && n <= 49) {
        costo = 300;
        printf("El alquiler es de %d, y cada alumno debe pagar %d", costo*n, costo);
    }
    if (n < 30) {
        costo = 6000;
        printf("El alquiler es de %d, y cada alumno debe pagar %d", costo, costo/n);
    }
        
}