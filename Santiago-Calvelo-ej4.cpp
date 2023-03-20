#include <stdio.h>

int main(void) {
    int a, b;

    printf("Ingrese sus dos numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a < b) {
        while (a != b) {
            if (a % 2 == 0) printf("%d ", a);
            a++;
        }
    }
    printf("\n");

    if (b < a) {
        while (b != a) {
            if (b % 2 ==  0) printf("%d ", b);
            b++;
        }
    }
    printf("\n");
}