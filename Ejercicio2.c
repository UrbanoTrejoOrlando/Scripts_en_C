/* 
 * Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula el precio total del boleto en función de la distancia a recorrer y el precio por kilómetro.
 */

#include <stdio.h>

int main() {  
    float precioKilometro, distancia, precioBoleto;

    // Entrada de datos
    printf("Precio por kilómetro: ");
    if (scanf("%f", &precioKilometro) != 1 || precioKilometro < 0) {
        printf("Entrada inválida para el precio por kilómetro.\n");
        return 1;
    }

    printf("Cantidad de kilómetros a recorrer: ");
    if (scanf("%f", &distancia) != 1 || distancia < 0) {
        printf("Entrada inválida para la distancia.\n");
        return 1;
    }

    // Cálculo del precio del boleto
    precioBoleto = precioKilometro * distancia;

    // Impresión del resultado
    printf("Precio del boleto: $%.2f\n", precioBoleto);

    return 0;
}

