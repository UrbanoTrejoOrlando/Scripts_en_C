/* Autor: Orlando Urbano Trejo @Lando
 * Fecha: 11-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula la letra que te corresponde dependiendo de la calificacion */

#include <stdio.h>
int main(){
	int calificacion;
	// Entrada de datos
	puts("Ingresa la calificacion obtenida (0-10): ");
	scanf("%d",&calificacion);
	switch(calificacion){
	    // Evaluaciones
		case 0:
		case 1:	
		case 2:
		case 3: 
		case 4:
		case 5: 
			puts("Tu calificacion es: F");
			break;
		case 6: 
		case 7:
		    puts("Tu calificacion es: D");
			break;
		case 8:
			puts("Tu calificacion es: C");
			break;
		case 9: 
		    puts("Tu calificacion es: B");
			break;
		case 10:
			puts("Tu calificacion es: A");
			break;
	}
   return 0;
}
