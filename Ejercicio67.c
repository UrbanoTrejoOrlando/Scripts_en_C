/*
 * Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Descripción: Programa en C que imprime una pirámide de números de altura `n`.
 */

#include <stdio.h>

// Función principal
int main() {
    int numero, posicionCentral, numPosiciones, posicionInicial, posicionFinal;

    // Solicitar al usuario que ingrese la altura de la pirámide
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Inicializar posiciones
    posicionCentral = numero;
    numPosiciones = numero * 2 - 1; 
    posicionInicial = numero;
    posicionFinal = numero;

    // Construir la pirámide
    for (int i = 0; i < numero; i++) {
        int contador = 1;

        // Generar cada línea de la pirámide
        for (int j = 1; j <= numPosiciones; j++) {
            // Imprimir espacios antes y después de los números
            if (j < posicionInicial || j > posicionFinal) {
                printf(" ");
            } else {
                // Imprimir números en orden ascendente hasta el centro y descendente después
                printf("%d", contador);
                if (j < posicionCentral) {
                    contador++;
                } else {
                    contador--;
                }
            }
        }

        // Cambiar las posiciones para la siguiente línea
        printf("\n");
        posicionFinal++;
        posicionInicial--;
    }

    return 0;
} // Fin de la función principal

