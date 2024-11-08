/* Orlando Urbano Trejo @Lando
 * Fecha: 18-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que almacena calificaciones de alumnos y calcula su promedio */

#include <stdio.h>

int main(){
    int calificacion[5];
    char materia[20];
    float suma = 0, promedio = 0; 
    
    // Entrada de datos
    puts("Materia: ");
    scanf("%s", materia); // Eliminé el uso de '&' en 'materia', ya que es un arreglo de caracteres.

    // Solicitar las calificaciones
    for(int i = 0; i < 5; i++){ // Usar índice i de 0 a 4 para evitar errores con los índices.
        printf("Calificacion en la Unidad %d: ", i + 1);
        scanf("%d", &calificacion[i]); // Corregido: debe ser &calificacion[i] para obtener la dirección de memoria.
        suma += calificacion[i];
    }  
    
    // Mostrar la materia
    printf("Asignatura: %s\n", materia); // Eliminé el uso de '&' para 'materia'.
    
    // Imprimir las calificaciones
    printf("Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\t Promedio\n");
    for(int i = 0; i < 5; i++){
        printf("%8d\t", calificacion[i]);
    }  

    // Calcular el promedio
    promedio = suma / 5; 
    printf("\nPromedio: %.2f\n", promedio); // Añadí un salto de línea para mejorar la presentación.
    
    return 0; 
}

