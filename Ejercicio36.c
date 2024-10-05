/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  20-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Los alumnos de primer semestre de la carrera de Ingeniería en Sistemas Computacionales tienen
que organizarse para el desfile del 20 de noviembre. Cada alumno deberá ir vestido de acuerdo al taller
en el que está inscrito: 
Presentaran un espectáculo en la Plaza Manuel Ávila Camacho de Jilotepec (El valor por esta
actividades de 1 crédito). Los Alumnos que hayan participado en la carrera tendrán 1 crédito, si logro
quedar en uno de los 3 primeros lugares, tendrá 1 crédito más. Imprime el total de créditos.*/

#include <stdio.h>

int main(){
	 int Carrera, Credito, Lugar;
  	 puts("Estas inscrito a un taller (1 = Si y 2 = No): ");
	 scanf("%d",&Credito);
	 if(Credito == 1){
	     puts("Tienes un credito");
		  puts("");
		  puts("Participaste  en la carrera (1 = si y 2 = NO)");
		  scanf("%d",&Carrera);
		  if(Carrera == 1){
			   puts("Tienes otro credito");
            puts("Quedaste en uno de los 3 primeros lugares");
			   scanf("%d",&Lugar);
			   if(Lugar == 1){
				    puts("Genial Tienes tres creditos");
			   }
			   else if(Lugar == 2){
				    puts("Tienes dos creditos");
			   }
		  }
		  else if(Carrera = 2){ 
			   puts("Tienes solo un credito");
		  }

	}
	else if(Credito == 2){
		 puts("Inscrite a un taller por favor");
		 puts("Participaste  en la carrera (1 = si y 2 = NO)");
       scanf("%d",&Carrera);
       if(Carrera == 1){
           puts("Tienes un credito");
			  puts("Quedaste en uno de lo s 3 primero lugares");
           scanf("%d",&Lugar);
              if(Lugar == 1){
              puts("Tienes dos creditos");
              }
              else if(Lugar == 2){
                   puts("Tienes un credito");
              } 
		 }
		 else if(Carrera == 2){
		 	  puts("No tienes ningun credito");
		 }
	}
	else{
		puts("Opcion Invalida");
	}
	return 0;
}
