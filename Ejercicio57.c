/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Ingresa por teclado el nombre y el signo de cualquier persona e imprima el nombre solo si la persona es signo Aries, caso contrario imprimir "No es signo Aries" */

#include <stdio.h>
#include <string.h>
// Metodo principal
int main(){
    char Nombre[30];
    char Signo[20];
    puts("Ingresa tu nombre:");
    scanf("%s",&Nombre);
    puts("Ingresa tu signo:");
    scanf("%s",&Signo);
    if(strcmp(Signo,"Aries")==0){
        printf("Eres signo aries, tu nombre es: %s\n",Nombre);
    } 
	 else{
        puts("No eres signo aries");
        }
    return 0;
}// Fin del metodo
