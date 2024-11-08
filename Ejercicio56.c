/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Ingresa un número, calcula e imprime su raíz cuadrada. Si el número es negativo, imprime un mensaje que diga "Tiene raíz imaginaria". */

#include <stdio.h>
#include <math.h>

// Método principal
int main() {
    float Numero, Resultado;

    puts("Ingresa un número:");
    scanf("%f", &Numero);

    if (Numero >= 0) {
        Resultado = sqrt(Numero);
        printf("La raíz cuadrada es: %.2f\n", Resultado);
    } else {
        puts("Tiene raíz imaginaria");
    }

    return 0;
} // Fin del método

