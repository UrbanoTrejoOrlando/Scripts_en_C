#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 * Algoritmo que calcula la cantidad de euros a monedas y viceversa */

// Prototipo de las funciones para la conversión de divisas
float convertirAEuros(float dinero, float euro);
float convertirADolares(float dinero, float dolar);

int main(){
    printf("-------- MENU DE CONVERSIONES --------\n1) Euros\n2) Dolares");
    int opcion, dinero;
    float dolar = 16.89, euro = 0.053, resultado = 0;

    // Entrada de datos

