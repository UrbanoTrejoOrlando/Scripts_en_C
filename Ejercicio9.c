/* 
 * Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para determinar el sueldo semanal de N trabajadores y aplicar descuentos en función del salario.
 */ 

#include <stdio.h>

int main() {
    int trabajadores;
    float horasTrabajadas, sueldoHora, salario, descuento, salarioFinal;
    char nombre[50];

    // Entrada de datos
    printf("Número de trabajadores: ");
    if (scanf("%d", &trabajadores) != 1 || trabajadores <= 0) {
        printf("Entrada inválida para el número de trabajadores.\n");
        return 1;
    }

    // Procesamiento de cada trabajador
    for (int i = 0; i < trabajadores; i++) {
        // Solicitud de datos de entrada
        printf("\nNombre del trabajador %d: ", i + 1);
        scanf("%s", nombre);

        printf("Horas trabajadas: ");
        if (scanf("%f", &horasTrabajadas) != 1 || horasTrabajadas < 0) {
            printf("Entrada inválida para las horas trabajadas.\n");
            return 1;
        }

        printf("Sueldo por hora: ");
        if (scanf("%f", &sueldoHora) != 1 || sueldoHora <= 0) {
            printf("Entrada inválida para el sueldo por hora.\n");
            return 1;
        }

        // Cálculo del salario y el descuento
        salario = horasTrabajadas * sueldoHora;

        if (salario <= 150) {
            descuento = salario * 0.5;  // Descuento del 50%
        } else if (salario <= 300) {
            descuento = salario * 0.3;  // Descuento del 30%
        } else if (salario <= 450) {
            descuento = salario * 0.1;  // Descuento del 10%
        } else {
            descuento = 0;  // No hay descuento
        }

        salarioFinal = salario - descuento;

        // Impresión del resultado para el trabajador actual
        printf("Trabajador: %s\n", nombre);
        printf("Salario sin descuento: %.2f\n", salario);
        printf("Descuento aplicado: %.2f\n", descuento);
        printf("Salario final: %.2f\n", salarioFinal);
    }

    return 0;
}

