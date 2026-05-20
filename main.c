#include <stdio.h>

void calculoPromedioReferencia(float notas[5], float *resultado) {
    float suma = 0;
    for (int i = 0; i < 5; i++) {
        printf("notas[%d] %.1f\n", i, notas[i]);
        suma += notas[i];
    }
    
    *resultado = suma / 5.0f;
}

int main(int argc, char *argv[]) {
    float notas[5] = {6.5, 7.1, 8, 6, 5};
    float promedio = 0;

    calculoPromedioReferencia(notas, &promedio);
    printf("promedio: %.2f\n", promedio);
    return 0;
}