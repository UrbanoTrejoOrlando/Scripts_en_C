/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 25-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Una compañia de refrescos comercializa tres productos: de cola, de naranja y de limon.
 * Se desea realizar un programa que calcule las ventas realizadas de cada producto. 
 * Para ello, se leerá la cantidad vendida (máximo 5000000) y el precio en euros de cada producto 
 * y se mostrará un informe de ventas como el que sigue:
 */

// Librerías
#include <stdio.h>

// Método principal
int main(){
    float Ventas_Cola, Ventas_Naranja, Ventas_Limon;
    float Precio_Cola, Precio_Naranja, Precio_Limon;
    float Total_Cola = 0, Total_Naranja = 0, Total_Limon = 0, Total_Final = 0;

    // Ventas Cola
    puts("Ingresa la cantidad de ventas de cola (máximo 5000000):");
    scanf("%f", &Ventas_Cola);
    if (Ventas_Cola > 5000000) {
        puts("Cantidad de ventas de cola excede el límite.");
        return 1;
    }
    puts("Precio del producto en euros:");
    scanf("%f", &Precio_Cola);
    Total_Cola = Ventas_Cola * Precio_Cola;

    // Ventas Naranja
    puts("Ingresa la cantidad de ventas de naranja (máximo 5000000):");
    scanf("%f", &Ventas_Naranja);
    if (Ventas_Naranja > 5000000) {
        puts("Cantidad de ventas de naranja excede el límite.");
        return 1;
    }
    puts("Precio del producto en euros:");
    scanf("%f", &Precio_Naranja);
    Total_Naranja = Ventas_Naranja * Precio_Naranja;

    // Ventas Limón
    puts("Ingresa la cantidad de ventas de limón (máximo 5000000):");
    scanf("%f", &Ventas_Limon);
    if (Ventas_Limon > 5000000) {
        puts("Cantidad de ventas de limón excede el límite.");
        return 1;
    }
    puts("Precio del producto en euros:");
    scanf("%f", &Precio_Limon);
    Total_Limon = Ventas_Limon * Precio_Limon;

    // Calcular el total general
    Total_Final = Total_Cola + Total_Naranja + Total_Limon;

    // Mostrar el informe de ventas
    printf("\nProducto    Ventas      Precio    Total\n");
    printf("-------------------------------------------\n");
    printf("Cola        %-10.0f  %-10.2f  %.2f\n", Ventas_Cola, Precio_Cola, Total_Cola);
    printf("Naranja     %-10.0f  %-10.2f  %.2f\n", Ventas_Naranja, Precio_Naranja, Total_Naranja);
    printf("Limón       %-10.0f  %-10.2f  %.2f\n", Ventas_Limon, Precio_Limon, Total_Limon);
    printf("-------------------------------------------\n");
    printf("TOTAL                                   %.2f\n", Total_Final);

    return 0;
} // Fin del método

