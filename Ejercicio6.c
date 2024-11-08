/* 
 * Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar el costo de una llamada telefónica.
 */

#include <stdio.h>

int main() {
    int tiempo;
    float costo, total;

    // Entrada de datos
    printf("Tiempo de la llamada en minutos: ");
    if (scanf("%d", &tiempo) != 1 || tiempo <= 0) {
        printf("Entrada inválida para el tiempo de llamada.\n");
        return 1;
    }

    printf("Costo por minuto en pesos: ");
    if (scanf("%f", &costo) != 1 || costo < 0) {
        printf("Entrada inválida para el costo por minuto.\n");
        return 1;
    }

    // Cálculo del costo total de la llamada
    total = tiempo * costo;

    // Impresión del resultado
    printf("Costo de la llamada: $%.2f\n", total);

    return 0;
}

