/*
 * Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Descripción: Programa que recibe como entrada el número obtenido al lanzar un dado de seis caras
 * (número entero) y muestra por pantalla el número en letras de la cara opuesta al resultado.
 *
 * Notas:
 * - En un dado de seis caras, las caras opuestas son: 1-6, 2-5 y 3-4.
 * - Si el número ingresado es menor que 1 o mayor que 6, se muestra un mensaje de error.
 */

#include <stdio.h>

// Función principal
int main() {
    int cara;

    // Solicitar al usuario el número de la cara del dado
    printf("Ingresa la cara del dado (1 a 6): ");
    scanf("%d", &cara);

    // Determinación de la cara opuesta usando una estructura switch
    switch (cara) {
        case 1:
            printf("El valor contrario de la cara es: SEIS\n");
            break;
        case 2:
            printf("El valor contrario de la cara es: CINCO\n");
            break;
        case 3:
            printf("El valor contrario de la cara es: CUATRO\n");
            break;
        case 4:
            printf("El valor contrario de la cara es: TRES\n");
            break;
        case 5:
            printf("El valor contrario de la cara es: DOS\n");
            break;
        case 6:
            printf("El valor contrario de la cara es: UNO\n");
            break;
        default:
            printf("ERROR: Número incorrecto\n");
    }

    return 0;
} // Fin de la función principal

