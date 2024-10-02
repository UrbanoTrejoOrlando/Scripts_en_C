/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la tercera parte de un numero */

#include <stdio.h>
int main(){
	float resultado1 = 0, resultado2 = 0, entrada, salida = 0;
    // Entrada de datos
	puts("Ingresa un numero: ");
    scanf("%f",&entrada);
    resultado1 = (entrada * 2);
    resultado2 = (resultado1 / 3);
    salida = resultado2 / 2;
	// Impresion de resultados
    printf("La mitad de la tercera parte del doble de %.2f es: %.2f\n",entrada,salida);
    return 0;
}
