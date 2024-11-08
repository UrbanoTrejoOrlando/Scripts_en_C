/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 22-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Este programa genera tablas de multiplicar de acuerdo al número de filas y columnas que el usuario introduzca. */

#include <stdio.h>

int main() {
    int filas, columnas;

    // Solicita al usuario el número de filas y columnas para la tabla de multiplicar
    puts("Introduce el número de filas: ");
    scanf("%d", &filas);
    puts("Introduce el número de columnas: ");
    scanf("%d", &columnas);

    // Genera las tablas de multiplicar
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            printf("%d\t", i * j); // Imprime el producto de i y j en formato tabular
        }
        printf("\n");  // Nueva línea al final de cada fila
    }

    return 0;
}

