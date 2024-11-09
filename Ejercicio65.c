/*
 * Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Descripción: Programa en C que determina si un número es primo.
 * Un número es primo si solo es divisible entre 1 y sí mismo.
 */

#include <stdio.h>

// Función principal
int main() {
    int numero, esPrimo = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Verificar si el número es primo
    if (numero <= 1) {
        esPrimo = 0; // Los números menores o iguales a 1 no son primos
    } else {
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                esPrimo = 0; // Si el número es divisible por 'i', no es primo
                break;
            }
        }
    }

    // Mostrar el resultado
    if (esPrimo) {
        printf("Es primo\n");
    } else {
        printf("No es primo\n");
    }

    return 0;
} // Fin de la función principal

