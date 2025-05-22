#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2) {
    float delta;
    if (a == 0) {
        *x1 = *x2 = 0;
       return 0;

    }

    delta = (b * b - 4 * a * c);

    if (delta < 0) {
        *x1 = *x2 = 0;
        return 0;
    } else if (delta == 0) {

        *x1 = *x2 = -b / (2 * a);
        return 1;
    }
    else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}
int main() {
    float a, b, c, x1, x2;

    printf("Digite os coeficientes a, b e c:\n");
    scanf("%f %f %f", &a, &b, &c);

    calcula_raizes(a, b, c, &x1, &x2);

    float delta = (b * b - 4 * a * c);

    if (a == 0) {
        printf("Nao é uma equacao do segundo grau.\n");
    } else if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else if (delta == 0) {
        printf("Raizes reais e iguais: x1 = x2 = %.2f\n", x1);
    } else {
        printf("Raizes reais e diferentes: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}
