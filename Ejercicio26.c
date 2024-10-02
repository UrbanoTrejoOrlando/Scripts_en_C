/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la calificacion de N alumnos y obtiene el promedio general.*/

#include <stdio.h>
int main(){
 	int alumno, edad;
    float suma = 0, promedio = 0;
	// Entrada de datos
    puts("Cuantos alumnos hay en el salon: ");
    scanf("%d",&alumno);
    for(int i = 0; i < alumno; i++){
    	printf("Edad del alumno %d: \n",i+1);
        scanf("%d",&edad);
        suma += edad;
    }
    promedio = suma / alumno;
    printf("El promedio de las edades de los alumnos es: %.2f\n",promedio);
    return 0;
}

