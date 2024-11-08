#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcule el sueldo total de un empleado */

// Prototipo de la función para calcular el sueldo
float calcularSueldo(float horas, float sueldoHora);

int main(){
    float horas, sueldoHora, sueldoFinal = 0;
    
    // Entrada de datos
    puts("Horas trabajadas:");
    scanf("%f", &horas);
    
    puts("Sueldo por hora:");
    scanf("%f", &sueldoHora);
    
    // Calcular el sueldo final
    sueldoFinal = calcularSueldo(horas, sueldoHora);
    
    // Mostrar el sueldo final
    printf("Sueldo total: $%.2f\n", sueldoFinal);
    
    return 0;
}

// Función para calcular el sueldo total
float calcularSueldo(float horas, float sueldoHora) {
    return horas * sueldoHora;
}

