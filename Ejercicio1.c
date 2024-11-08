/* 
 * Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la letra correspondiente a la calificación ingresada.
 */

#include <stdio.h>

int main() {
    int calificacion;

    // Entrada de datos
    printf("Ingresa la calificación obtenida (0-10): ");
    scanf("%d", &calificacion);

    // Evaluación de la calificación
    switch(calificacion) {
        case 0: case 1: case 2: case 3: case 4: case 5:
            printf("Tu calificación es: F\n");
            break;
        case 6: case 7:
            printf("Tu calificación es: D\n");
            break;
        case 8:
            printf("Tu calificación es: C\n");
            break;
        case 9:
            printf("Tu calificación es: B\n");
            break;
        case 10:
            printf("Tu calificación es: A\n");
            break;
        default:
            printf("Calificación inválida. Debe estar en el rango de 0 a 10.\n");
    }

    return 0;
}

