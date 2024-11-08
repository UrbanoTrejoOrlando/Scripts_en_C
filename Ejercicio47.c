/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 25-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: La empresa que fabrica un modelo de maquinas expendedoras de refrescos necesita un programa
 * para estas maquinas que realice el cálculo de cuántas monedas de cada tipo debe devolver.
 */

// Librerías
#include <stdio.h>

// Método principal
int main() {
    float Cantidad_Euros;
    int Euros_Devolver, Centimos_Devolver;
    int Centimos_50 = 0, Centimos_20 = 0, Centimos_10 = 0, Centimos_5 = 0;

    // Solicitar al usuario la cantidad a devolver
    puts("Ingresa la cantidad a devolver en euros (ejemplo: 1.85): ");
    scanf("%f", &Cantidad_Euros);

    // Convertir la cantidad a centavos (evitar decimales)
    Euros_Devolver = (int)Cantidad_Euros;          // Parte entera (euros)
    Centimos_Devolver = (int)((Cantidad_Euros - Euros_Devolver) * 100);  // Parte decimal (centavos)

    // Calcular monedas de 50 céntimos
    Centimos_50 = Centimos_Devolver / 50;
    Centimos_Devolver %= 50;  // Queda lo que no se puede dividir por 50

    // Calcular monedas de 20 céntimos
    Centimos_20 = Centimos_Devolver / 20;
    Centimos_Devolver %= 20;  // Queda lo que no se puede dividir por 20

    // Calcular monedas de 10 céntimos
    Centimos_10 = Centimos_Devolver / 10;
    Centimos_Devolver %= 10;  // Queda lo que no se puede dividir por 10

    // Calcular monedas de 5 céntimos
    Centimos_5 = Centimos_Devolver / 5;
    Centimos_Devolver %= 5;  // Lo que queda es la cantidad que no se puede dividir por 5

    // Imprimir los resultados
    printf("%d monedas de 50 centimos.\n", Centimos_50);
    printf("%d monedas de 20 centimos.\n", Centimos_20);
    printf("%d monedas de 10 centimos.\n", Centimos_10);
    printf("%d monedas de 5 centimos.\n", Centimos_5);

    return 0;
} // Fin del método

