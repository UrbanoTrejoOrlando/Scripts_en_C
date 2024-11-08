/* 
 * Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023 
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la cantidad de ventas realizadas por un vendedor y aplica un descuento según el monto de cada venta.
 */

#include <stdio.h>

int main() {
    int ventas;
    float totalFinal = 0.0, total = 0.0;

    // Entrada de datos
    printf("Número de ventas: ");
    if (scanf("%d", &ventas) != 1 || ventas <= 0 || ventas > 40) {
        printf("Número de ventas inválido. Debe ser un entero positivo hasta 40.\n");
        return 1;
    }

    float cantidad[ventas]; // Declaración del arreglo para almacenar el precio de cada venta

    // Ciclo para ingresar cada venta y acumular el total con descuentos
    for (int i = 0; i < ventas; i++) {
        printf("Precio de la venta %d: ", i + 1);
        if (scanf("%f", &cantidad[i]) != 1 || cantidad[i] < 0) {
            printf("Entrada inválida para el precio de la venta.\n");
            return 1;
        }

        // Acumulación total sin descuento
        totalFinal += cantidad[i];

        // Aplicación de descuentos según el monto de la venta
        if (cantidad[i] < 1000) {
            total += cantidad[i];
        } else if (cantidad[i] >= 1000 && cantidad[i] < 2000) {
            total += cantidad[i] * 0.9; // 10% de descuento
        } else {
            total += cantidad[i] * 0.8; // 20% de descuento
        }
    }

    // Impresión del total final
    printf("Total sin descuento: %.2f\n", totalFinal);
    printf("Total con descuento aplicado: %.2f\n", total);

    return 0;
}

