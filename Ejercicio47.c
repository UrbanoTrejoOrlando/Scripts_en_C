/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: La empresa que fabrica un modelo de maquinas expendedoras de refrescos necesita un programa para estas maquinas que realicebel calculo de cuantas monedas de cada tipo debe devolver. Para ello, en primer lugar, se introducira por teclado la cantidad a devolver en euros (multiplo de 5 centimos, que es la moneda mas pequena de la que se dispone), es decir, se tecleara 1.85 para 1 euro con 85 centimos. Este programa escribira en pantalla cuantas monedas de cada tipo hay que devolver teniendo en cuenta que:
- Se dispone de monedas de 50 centimos, 20 centimos, 10 centimos y 5 centimos.
- Siempre se dispone de las monedas necesarias de cada tipo.
- Se debe devolver el menor numero de monedas posible, es decir, intentar devolver con las de mayor valor */
/* Ejemplo:
Si se introduce la cantidad de 1 euro con 85 centimos, el programa debe imprimir: 3 monedas de 50 centimos,1 moneda de 20 centimos,1 moneda de 10 centimos,1 moneda de 5 centimos.
Si se introduce la cantidad de 1 euro con 20 centimos, el pro-grama debe imprimir:2 monedas de 50 centimos, 1 moneda de 20 centimos, 0 monedas de 10 centimos, 0 monedas de 5 centimos. */

#include <stdio.h>
// Metodo principal
int main(){
    float Cantidad_Euros, Euros_Devolver, Centimos20_Devolver,Centimos10_Devolver,Centimos5_Devolver;
    int Centimos_50 = 0, Centimos_20 = 0,Centimos_10 = 0, Centimos_5 = 0;
    float Devolver = 0;
    puts("Ingresa la cantidad a devolver en euros: ");
    scanf("%f",&Cantidad_Euros);
    Euros_Devolver = Cantidad_Euros;
    Centimos_50 = Euros_Devolver / 0.5;
    Euros_Devolver  = Euros_Devolver - 0.5 * Centimos_50;
    // Centimos 20
    Centimos_20 = Euros_Devolver / 0.2;
    Euros_Devolver = Euros_Devolver - 0.2 * Centimos_20;
    // Centimos 10
    Centimos_10 = Euros_Devolver / 0.1;
    Euros_Devolver = Euros_Devolver - 0.1 * Centimos_10;
    // Centimos 5
    Centimos_5 = Euros_Devolver / 0.05;
    // Impresion
    printf("%d monedas de 50 centimos.\n",Centimos_50);
    printf("%d monedas de 20 centimos.\n",Centimos_20);
    printf("%d monedas de 10 centimos.\n",Centimos_10);
    printf("%d monedas de 5 centimos.\n",Centimos_5);

    return 0;
}//  del metodo

