#include <stdio.h>

/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la calificacion de N alumnos y obtiene el promedio general. */

// Prototipo de la función para calcular el promedio de edades
float calcularPromedioEdades(int alumno);

int main(){
    int alumno;
    
    // Entrada de datos
    puts("Cuantos alumnos hay en el salon: ");
    scanf("%d", &alumno);
    
    // Calcular el promedio de edades
    float promedio = calcularPromedioEdades(alumno);
    
    // Impresión de resultados
    printf("El promedio de las edades de los alumnos es: %.2f\n", promedio);
    
    return 0;
}

// Función para calcular el promedio de las edades de los alumnos
float calcularPromedioEdades(int alumno) {
    int edad;
    float suma = 0;
    
    for(int i = 0; i < alumno; i++){
        printf("Edad del alumno %d: \n", i + 1);
        scanf("%d", &edad);
        suma += edad;
    }
    
    return suma / alumno;
}

