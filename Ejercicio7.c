/* Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo para leer calificaciones de N alumnos y determinar el numero de aprobados y reprobados */

#include <stdio.h>
int main(){
	 int alumnos;
	 float calificacion;
	 // Entrada de datos
	 puts("Cantidad de alumnos: ");
	 scanf("%d",&alumnos);
	 for(int i = 0; i<alumnos; i++){
		 // Recabar calificacion de alumnos
		 printf("Calificacion del alumno %d (1-100):\n",1+i);
		 scanf("%f",&calificacion);
		 // Condicionales
		 if(calificacion > 70){
			 puts("APROBADO");
		 }
		 else{
	 		  puts("REPROBADO");
		 }
	 }
	 return 0;
}
