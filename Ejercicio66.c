/*
 * Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Descripción: Programa en C que calcula la suma de los números pares desde un número inicial (n) hasta un número final (m).
 */

#include <stdio.h>

// Función principal
int main() {
    int numInicio, numFinal, suma = 0;

    // Solicitar al usuario que ingrese el número inicial y final
    printf("Ingresa un número para el inicio de la suma: ");
    scanf("%d", &numInicio);

    printf("Ingresa un número para el límite de la suma: ");
    scanf("%d", &numFinal);

    // Calcular la suma de los números pares entre numInicio y numFinal
    for (int i = numInicio; i <= numFinal; i++) {
        if (i % 2 == 0) { // Verifica si el número es par
            suma += i;
        }
    }

    // Mostrar el resultado de la suma
    printf("Suma: %d\n", suma);

    return 0;
} // Fin de la función principal

