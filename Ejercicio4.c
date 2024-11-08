/* 
 * Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para calcular el tiempo que tarda una persona en hacer un recorrido.
 */

#include <stdio.h>

int main() {
    float velocidad, distancia, tiempo;

    // Entrada de datos
    printf("Velocidad en km/h: ");
    if (scanf("%f", &velocidad) != 1 || velocidad <= 0) {
        printf("Entrada inválida para la velocidad.\n");
        return 1;
    }

    printf("Distancia recorrida en km: ");
    if (scanf("%f", &distancia) != 1 || distancia < 0) {
        printf("Entrada inválida para la distancia.\n");
        return 1;
    }

    // Cálculo del tiempo en horas
    tiempo = distancia / velocidad;

    // Impresión del resultado
    printf("Tiempo: %.2f horas\n", tiempo);

    return 0;
}

