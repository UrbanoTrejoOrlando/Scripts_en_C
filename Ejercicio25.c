#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para calcular el factorial de un numero */

// Prototipo de la función para calcular el factorial de un número
int calcularFactorial(int numero);

int main(){
    int numero, resultado;
    
    // Entrada de datos
    puts("Ingresa un numero: ");
    scanf("%d", &numero);
    
    // Calcular el factorial
    resultado = calcularFactorial(numero);
    
    // Impresión de resultados
    printf("El factorial de %d es: %d\n", numero, resultado);
    
    return 0; 
}

// Función para calcular el factorial de un número
int calcularFactorial(int numero) {
    int resultado = 1;
    
    for(int i = 1; i <= numero; i++){
        resultado *= i;  // Multiplica cada número hasta llegar al factorial
    }
    
    return resultado;
}

