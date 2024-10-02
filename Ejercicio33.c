/* Autor:  Orlando Urbano Trejo @Lando 
 * Fecha:  20-07-2023 
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algoritmo que calcula los creditos de alumnos dependiendo de ciertas actividades */

#include <stdio.h>
int main(){
	int carrera, credito, lugar;
    // Entrada de datos
	puts("Estas inscrito a un taller (1 = Si y 2 = No): ");
    scanf("%d",&credito);
	// Condicionales
    if(credito == 1){
    	puts("Tienes un credito");
        puts("");
        puts("Participaste  en la carrera (1 = si y 2 = NO)");
        scanf("%d",&carrera);
        if(carrera == 1){
        	puts("Tienes otro credito");
            puts("Quedaste en uno de los 3 primeros lugares");
            scanf("%d",&lugar);
            if(lugar == 1){
            	puts("Genial Tienes tres creditos");
            }
            else if(lugar == 2){
               	puts("Tienes dos creditos");
           	}
       }
       else if(carrera = 2){ 
       	   puts("Tienes solo un credito");
       }

    }  
    else if(credito == 2){
        puts("Inscrite a un taller por favor");
        puts("Participaste  en la carrera (1 = si y 2 = NO)");
        scanf("%d",&carrera);
       if(carrera == 1){
           puts("Tienes un credito");
           puts("Quedaste en uno de lo s 3 primero lugares");
           scanf("%d",&lugar);
           if(lugar == 1){
           	   puts("Tienes dos creditos");
           }
           else if(lugar == 2){
               puts("Tienes un credito");
           }
       }
       else if(carrera == 2){
           puts("No tienes ningun credito");
       }
    }  
    else{
        puts("Opcion Invalida");
    }  
    return 0; 
}
 
