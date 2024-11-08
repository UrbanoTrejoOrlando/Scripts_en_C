#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la edad de una persona en meses */

// Prototipo de la función para calcular la edad en meses
int calcularEdadEnMeses(int edad, int meses);

int main(){
    int edad, meses, resultado = 0;
    
    // Entrada de datos
    puts("Edad en años:");
    scanf("%d", &edad);
    
    puts("Cuantos meses:");
    scanf("%d", &meses);
    
    // Calcular la edad en meses
    resultado = calcularEdadEnMeses(edad, meses);
    
    // Mostrar la edad total en meses
    printf("Edad: %d meses\n", resultado);
    
    return 0;
}

// Función para calcular la edad en meses
int calcularEdadEnMeses(int edad, int meses) {
    return (edad * 12) + meses;  // Convierte los años a meses y agrega los meses adicionales
}

