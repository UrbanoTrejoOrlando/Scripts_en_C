   /* Orlando Urbano Trejo @Lando
 * Fecha: 18-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula el descuento de una urna dependiendo del tipo de pelota que saque. */

#include <stdio.h>

int main() {
    int pelota;
    float compra = 0, resultado = 0;

    // Menú de opciones
    printf("-----CAFETERIA TESJI-----\n");
    printf("1) Pelota Verde\n2) Pelota Roja\n3) Pelota Amarilla\n");
    printf("Elige una opción: ");
    
    // Entrada de datos
    scanf("%d", &pelota);

    // Solicitar el total de la compra si la opción es válida
    if (pelota == 1 || pelota == 2 || pelota == 3) {
        printf("Total de tu compra: ");
        scanf("%f", &compra);
    }

    // Condicionales para aplicar el descuento según el tipo de pelota
    switch (pelota) {
        case 1:
            puts("Descuento 10%");
            resultado = compra * 0.90;
            printf("Monto total: $%.2f\n", resultado);
            break;
        case 2:
            puts("Descuento 5%");
            resultado = compra * 0.95;
            printf("Monto total: $%.2f\n", resultado);
            break;
        case 3:
            puts("Descuento 15%");
            resultado = compra * 0.85;
            printf("Monto total: $%.2f\n", resultado);
            break;
        default:
            puts("Opción no válida");
            break;
    }

    return 0;
}

