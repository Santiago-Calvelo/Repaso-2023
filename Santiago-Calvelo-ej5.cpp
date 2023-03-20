#include <stdio.h>

int main(void) {
    int km1 = 70;
    int km2 = 150;

    int dis = km2 - km1;
    int v;
    printf("Ingrese la velocidad a la que viajan: ");
    scanf("%d", &v);

    double t = dis / v;
    double kmf = km1 + (v * t);

    printf("Los autos se encontraran en el km: %.2f", kmf);
}