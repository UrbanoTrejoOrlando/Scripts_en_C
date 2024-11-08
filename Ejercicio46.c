/* Autor: Orlando Urbano Trejo (Lando)
 * Fecha: 25-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir un programa que lea los valores de los catetos de un triángulo rectángulo
 * y calcule cuál es la hipotenusa, área y el perímetro del triángulo mediante las siguientes expresiones.
 */

// Librerías
#include <stdio.h>
#include <math.h>

// Método principal
int main() {
    float Cateto1, Cateto2, Hipotenusa = 0, Area = 0, Perimetro = 0;

    // Solicitar al usuario los valores de los catetos
    puts("Ingresa el valor del cateto 1:");
    scanf("%f", &Cateto1);
    puts("Ingresa el valor del cateto 2:");
    scanf("%f", &Cateto2);

    // Calcular la hipotenusa usando el teorema de Pitágoras
    Hipotenusa = sqrt(pow(Cateto1, 2) + pow(Cateto2, 2));

    // Calcular el área
    Area = (Cateto1 * Cateto2) / 2;

    // Calcular el perímetro
    Perimetro = Cateto1 + Cateto2 + Hipotenusa;

    // Imprimir los resultados con formato adecuado
    printf("El valor de la hipotenusa es de: %.2f cm\n", Hipotenusa);
    printf("El área es: %.2f cm²\n", Area);
    printf("El perímetro es: %.2f cm\n", Perimetro);

    return 0;
} // Fin del método

