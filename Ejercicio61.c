/*
 * Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Descripción: Programa que determina si un año es bisiesto o no.
 * Un año es bisiesto si es divisible por 4, pero no si es divisible por 100,
 * excepto cuando también es divisible por 400.
 */

#include <stdio.h>

// Función principal
int main() {
    int anio;

    // Solicitar al usuario que ingrese un año
    printf("Ingresa un año: ");
    scanf("%d", &anio);

    // Determinación de si el año es bisiesto
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        printf("ES BISIESTO\n");
    } else {
        printf("ES AÑO NORMAL\n");
    }

    return 0;
} // Fin de la función principal

