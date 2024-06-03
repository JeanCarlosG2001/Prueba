#include <stdio.h>

int main() {
    // Definir una matriz 3x3
    int matriz[3][3];

    // Variable para contar los elementos
    int contador = 1;

    // Llenar la matriz con valores del 1 al 9
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = contador;
            contador++;
        }
    }

    // Imprimir la matriz
    printf("La matriz es:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}