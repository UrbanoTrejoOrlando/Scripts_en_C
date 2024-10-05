/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023 
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un programa que lea una cadena por teclado y compruebe si es una letra mayuscula */

#include <stdio.h>
#include <string.h>
// Metodo principal
int main(){
    char letra[5];
    puts("Ingresa una letra:");
    scanf("%s",&letra);
    if(strcmp(letra,"A")>=0 && strcmp(letra,"Z") <= 0){
        printf("La letra %s es mayuscula\n",letra);
    }
	 else{
        printf("La letra %s es minuscula\n",letra);
    }
    return 0;
}// Fin del metodo

