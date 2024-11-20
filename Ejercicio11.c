#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 * Algoritmo que calcula la multiplicacion de dos numeros */

// Prototipo de la función para calcular la multiplicación
float multiplicar(float numero1, float numero2);

int main(){
    float numero1, numero2, resultado = 0; 

    // Entrada de datos
	 puts("Numero 1: ");
	 scanf("%f", &numero1);

    puts("Numero 2: ");
    scanf("%f", &numero2);

    // Llamar a la función para multiplicar los números
    resultado = multiplicar(numero1, numero2);

    // Imprimir el resultado
    printf("Resultado: %.2f\n", resultado);






