/* Orlando Urbano Trejo (Lando)
 * Fecha: 18-07-2023
 * Correo: urbanoorlando79@gmail.com
 */
/* Ejercicio: En la cafetería de Tesji hay una urna con pelotas de colores: verde, roja y amarilla. 
   Cada una aplica un descuento diferente en el total de tu compra.
   La pelota verde ofrece un 10% de descuento, la amarilla un 5%, y la roja un 15%.
   Con base en esos datos, imprime el monto final a pagar, ya con el descuento. */

#include <stdio.h>

int main() {
    int Pelota;
    float Compra = 0, Resultado = 0;
    
    puts("-----CAFETERIA TESJI-----");
    puts("1) Pelota Verde - 10% de descuento");
    puts("2) Pelota Roja - 5% de descuento");
    puts("3) Pelota Amarilla - 15% de descuento");

    puts("Elige una opción: ");
    scanf("%d", &Pelota);

    // Verificar si la opción es válida antes de pedir el monto de compra
    if (Pelota >= 1 && Pelota <= 3) {
        puts("Total de tu compra: ");
        scanf("%f", &Compra);

        // Aplicar descuento según la opción seleccionada
        switch (Pelota) {
            case 1:
                puts("Descuento 10%");
                Resultado = Compra * 0.90;
                break;
            case 2:
                puts("Descuento 5%");
                Resultado = Compra * 0.95;
                break;
            case 3:
                puts("Descuento 15%");
                Resultado = Compra * 0.85;
                break;
        }
        
        printf("Monto total: $%.2f\n", Resultado);
    } else {
        puts("Opción no válida");
    }

    return 0;
}

