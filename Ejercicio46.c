/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Escribir un programa que lea los valores de los catetos de un triangulo rectangulo y calcule cual es la hipotenusa, area y el perimetro del triangulo mediante las siguientes expresiones */

// Librerias
#include <stdio.h>
#include <math.h>
// Metodo principal
int main(){
    float Cateto1, Cateto2, Hipotenusa = 0, Area = 0, Perimetro = 0;
    puts("Ingresa el valor del cateto 1:");
    scanf("%f",&Cateto1);
    puts("Ingresa el valor del cateto 2:");
    scanf("%f",&Cateto2);
    Hipotenusa = sqrt(pow(Cateto1,2)+pow(Cateto2,2));
    Area = (Cateto1 * Cateto2) / 2;
    Perimetro = Cateto1 + Cateto2 + Hipotenusa;
    printf("El valor de la hipotenusa es de: %.2f cm\n",Hipotenusa);
    printf("El area es: %.2f cm\n",Area);
    printf("El perimetro es: %.2f cm\n",Perimetro);
    return 0;
}// Fin del metodo

