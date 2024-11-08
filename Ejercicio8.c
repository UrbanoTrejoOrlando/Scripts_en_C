/* 
 * Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar el pago que debe realizar una persona por el consumo de agua.
 */

#include <stdio.h>

int main() {
    int precioMetros, metros;
    float resultado;

    // Entrada de datos
    printf("Ingresa el precio por metro cúbico: ");
    if (scanf("%d", &precioMetros) != 1 || precioMetros <= 0) {
        printf("Entrada inválida para el precio por metro cúbico.\n");
        return 1;
    }

    printf("Metros cúbicos consumidos: ");
    if (scanf("%d", &metros) != 1 || metros < 0) {
        printf("Entrada inválida para los metros cúbicos consumidos.\n");
        return 1;
    }

    // Cálculo del pago total
    resultado = precioMetros * metros;

    // Impresión del resultado
    printf("Pago total: $%.2f\n", resultado);

    return 0;
}

