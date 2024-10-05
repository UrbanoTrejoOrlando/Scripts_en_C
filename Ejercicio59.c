/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un programa que calcule la aceptacion de una solicitud en base a los siguientes parametros: edad, nota y sexo.
* Minimo: Nota (5), edad (18), sexo M -> POSIBLE
* Minimo: Nota (5), edad (18), sexo F -> ACEPTADA
* Otros casos -> NO ACEPTADA */

#include <stdio.h>
#include <string.h>
// Metodo principal
int main(){
    char Nota[5];
    char Edad[5];
    char Sexo[5];
    puts("Ingresa tu calificacion obtenida:");
    scanf("%s",&Nota);
    puts("Ingresa tu edad:");
    scanf("%s",&Edad);
    puts("Ingresa sexo:");
    scanf("%s",&Sexo);
    if(strcmp(Nota,"5") == 0 && strcmp(Edad,"18") == 0 && strcmp(Sexo,"M") == 0){
        printf("Solicitud (%s), Edad (%s), sexo (%s) ---> SOLICITUD POSIBLE\n",Nota,Edad,Sexo);
    }
	 else if(strcmp(Nota,"5") == 0 && strcmp(Edad,"18") == 0 && strcmp(Sexo,"F") == 0){
        printf("Solicitud (%s), Edad (%s), sexo (%s) ---> SOLICITUD ACEPTADA\n",Nota,Edad,Sexo);
    }
	 else{
        puts("SOLICITUD NO ACEPTADA");
    }
    return 0;
}// Fin del metodo


