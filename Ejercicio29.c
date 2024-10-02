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
    //Entrada de datos
	puts("Materia: ");
    scanf("%s",&materia);
   	for(int i = 1; i <=5; i++){
    	// Solicitar datos
		printf("Calificacion en la Unidad %d:\n",i);
        scanf("%d",&calificacion[i]);
        suma += calificacion[i];
    }  
    printf("Asignatura: %s\n",&materia);
    printf("Unidad 1\tUnidad 2\tUnidad 3\tUnidad 4\tUnidad 5\t Promedio\n");
    for(int i = 1; i <=5; i++){
        printf("%8d\t",calificacion[i]);
    }  
	// Operaciones
    promedio = suma / 5; 
    printf("%.2f\n",promedio);
    return 0; 
}

