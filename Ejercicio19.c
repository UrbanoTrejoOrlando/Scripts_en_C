#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 12-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 * Algoritmo que determina el descuento de un empleado */

// Prototipo de la función para calcular el salario con descuento
float calcularDescuento(float salario);

int main(){
    char nombre[10];
    float salario, salarioConDescuento = 0;
    
    // Entrada de datos
    puts("Nombre:");
    scanf("%s", nombre);
    
    puts("Salario: ");
    scanf("%f", &salario);
    
    // Calcular el salario con descuento
    salarioConDescuento = calcularDescuento(salario);
    
    // Mostrar el salario con descuento
    printf("Empleado: %s su salario con descuento es: %.2f\n", nombre, salarioConDescuento);
    
    return 0;
}

// Función para calcular el salario con descuento
float calcularDescuento(float salario) {
    return salario - (salario * 0.20);  // Aplica un descuento del 20%
}

