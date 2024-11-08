/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 22-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Este programa imprime los números de 5 en 5 hasta el límite que el usuario indique. */

#include <stdio.h>

int main() {
    int numero;

    // Solicita al usuario el límite de la secuencia
    puts("Ingresa un número límite: ");
    scanf("%d", &numero);

    // Imprime los números de 5 en 5 hasta el límite
    for (int i = 5; i <= numero; i += 5) {
        printf("%d, ", i);
    }

    printf("\n");  // Nueva línea al final de la secuencia
    return 0;
}

