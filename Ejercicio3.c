/* 
 * Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula el total de dinero en una caja registradora.
 */

#include <stdio.h> 

int main() {
    int cantidad;
    float resultado = 0.0;
    float denominaciones[] = {1000, 500, 200, 100, 50, 20, 5, 2, 1, 0.50, 0.20, 0.10};

    // Bucle para procesar cada denominación de dinero
    for(int i = 0; i < 12; i++) {
        // Entrada de datos
        printf("Cantidad de billetes o monedas de %.2f pesos: ", denominaciones[i]);
        if (scanf("%d", &cantidad) != 1 || cantidad < 0) {
            printf("Entrada inválida.\n");
            return 1;
        }

        // Cálculo del total acumulado
        resultado += cantidad * denominaciones[i];
    }

    // Impresión del total
    printf("Total almacenado en la caja registradora: $%.2f pesos\n", resultado);

    return 0;
}

