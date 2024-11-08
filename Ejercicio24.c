#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la tercera parte de un numero */

// Prototipo de la función para calcular la mitad de la tercera parte del doble
float calcularResultado(float entrada);

int main(){
    float entrada, resultado;
    
    // Entrada de datos
    puts("Ingresa un numero: ");
    scanf("%f", &entrada);
    
    // Calcular el resultado
    resultado = calcularResultado(entrada);
    
    // Impresión de resultados
    printf("La mitad de la tercera parte del doble de %.2f es: %.2f\n", entrada, resultado);
    
    return 0;
}

// Función para calcular la mitad de la tercera parte del doble de un número
float calcularResultado(float entrada) {
    float resultado1 = 0, resultado2 = 0, salida = 0;
    
    resultado1 = (entrada * 2);  // Doble del número
    resultado2 = (resultado1 / 3);  // Tercera parte del doble
    salida = resultado2 / 2;  // Mitad de la tercera parte
    
    return salida;
}

