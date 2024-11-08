/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 20-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Este programa genera la serie de Fibonacci hasta el término especificado por el usuario. */

#include <stdio.h>

int main() {
    int numero, x = 0, y = 1, z;

    // Solicita al usuario el número de términos a mostrar en la serie
    puts("Introduce el número de términos de la serie Fibonacci: ");
    scanf("%d", &numero);

    // Imprime el primer término
    printf("Serie Fibonacci: %d", x);

    // Genera la serie de Fibonacci
    for (int i = 1; i < numero; i++) {
        printf(", %d", y);
        z = x + y;  // Calcula el siguiente término
        x = y;      // Actualiza los valores
        y = z;
    }

    printf("\n");  // Nueva línea al finalizar la serie
    return 0;
}

