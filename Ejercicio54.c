/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  25-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Visualizar la tarifa de luz según el gasto de corriente eléctrica, para un gasto menor de: 
 * 1000 Kw, la tarifa es de 1.2, entre 1000 y 1850 Kw la tarifa es 1.0 y mayor de 1850 la tarifa es de 0.9 */

#include <stdio.h>

// Método principal
int main() {
    float Corriente, Tarifa1 = 1.2, Tarifa2 = 1.0, Tarifa3 = 0.9;
    float Total_Pagar = 0;

    puts("Ingresa el gasto de corriente eléctrica en Kw:");
    scanf("%f", &Corriente);

    if (Corriente < 1000) {
        Total_Pagar = Corriente * Tarifa1;
        printf("Tu tarifa es de: %.2f\n", Tarifa1);
    }
    else if (Corriente >= 1000 && Corriente < 1850) {
        Total_Pagar = Corriente * Tarifa2;
        printf("Tu tarifa es de: %.2f\n", Tarifa2);
    }
    else {
        Total_Pagar = Corriente * Tarifa3;
        printf("Tu tarifa es de: %.2f\n", Tarifa3);
    }

    printf("El total a pagar es: %.2f\n", Total_Pagar);
    return 0;
}
// Fin del método

