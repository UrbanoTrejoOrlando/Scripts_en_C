/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 22-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Este programa calcula la suma de la serie (1-2+3-4+5-6+... hasta n),
 * donde n es un número ingresado por el usuario. */

#include <stdio.h>

int main() {
    int numero, suma = 0;

    // Solicita al usuario el valor de 'n'
    puts("Ingresa un número:");
    scanf("%d", &numero);

    // Realiza la suma de los números alternando entre positivos y negativos
    for (int i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
            suma -= i; // Resta los números pares
        } else {
            suma += i; // Suma los números impares
        }
    }

    // Muestra el resultado
    printf("Suma: %d\n", suma);

    return 0;
}

