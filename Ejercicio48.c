/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Una compania de refrescos comercializa tres productos: de cola, de naranja y de limon. Se desea realizar un programa que calcule las ventas realizadas de cada producto. Para ello, se leera la cantidad vendida (maximo 5000000) y el precio en euros de cada producto y se mostrara un informe de ventas como el que sigue: */

#include <stdio.h>
// Metodo principal
int main(){
    float Ventas_Cola, Ventas_Naranja, Ventas_Limon;
    float Precio_Cola, Precio_Naranja, Precio_Limon;
    float Total_Cola = 0, Total_Naranja = 0, Total_Limon = 0, Total_Final = 0;
    // Ventas Cola
    puts("Ingresa la cantidad de ventas de cola:");
    scanf("%f",&Ventas_Cola);
    puts("Precio del producto");
    scanf("%f",&Precio_Cola);
    Total_Cola = Ventas_Cola * Precio_Cola;
    // Ventas Naranja
    puts("Ingresa la cantidad de ventas de naranja:");
    scanf("%f",&Ventas_Naranja);
    puts("Precio del producto");
    scanf("%f",&Precio_Naranja);
    Total_Naranja = Ventas_Naranja * Precio_Naranja;
    // Ventas Limon
    puts("Ingresa la cantidad de ventas de limon:");
    scanf("%f",&Ventas_Limon);
    puts("Precio del producto");
    scanf("%f",&Precio_Limon);
    Total_Limon = Ventas_Limon * Precio_Limon;
    Total_Final = Total_Cola + Total_Naranja + Total_Limon;
    printf("Producto    Ventas   Precio Total");
    printf("\n-----------------------------------------------\n");
    printf("Cola        %7lf\t      %.2f\t  %.2f\t\n",Ventas_Cola,Precio_Cola,Total_Cola);
    printf("Naranja     %7lf\t      %.2f\t  %.2f\t\n",Ventas_Naranja,Precio_Naranja,Total_Naranja);
    printf("Limon       %7lf\t      %.2f\t  %.2f\t\n",Ventas_Limon,Precio_Limon,Total_Limon);
    printf("                            TOTAL         %.2f\t\n",Total_Final);

    return 0;
}// Fin del metodo
