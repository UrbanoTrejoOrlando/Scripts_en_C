/* Autor:  Orlando Urbano Trejo (Lando)
 * Fecha:  26-07-2023
 * Correo: urbanorlando79@gmail.com
 *
 * Ejercicio: Realiza un programa que clasifique un triangulo tras recibir el tamano de sus lados. Se debe clasificar como: triangulo rectangulo, isosceles, equilatero o escaleno.*/

#include <stdio.h>
#include <math.h>

int main(){
    int Lado_1, Lado_2, Lado_3;
    puts("Ingresa el tamano del lado 1:");
    scanf("%d",&Lado_1);
    puts("Ingresa el tamano del lado 2:");
    scanf("%d",&Lado_2);
    puts("Ingresa el tamano del lado 3:");
    scanf("%d",&Lado_3);
    
	 if(Lado_1 > Lado_2 && Lado_1 > Lado_3){
        if(pow(Lado_1,2) == pow(Lado_2,2) + pow(Lado_3,2)){   
            puts("ES UN TRIANGULO RECTANGULO");
        }
    }  
	 else if(Lado_2 > Lado_1 && Lado_2 > Lado_3){
        if(pow(Lado_2,2) == pow(Lado_1,2) + pow(Lado_3,2)){   
            puts("ES UN TRIANGULO RECTANGULO");
        }
    }  
	 else if(Lado_3 > Lado_1 && Lado_3 > Lado_2){
        if(pow(Lado_3,2) == pow(Lado_1,2) + pow(Lado_2,2)){   
            puts("ES UN TRIANGULO RECTANGULO");
        }
    }  
	 else if(Lado_1 == Lado_2 && Lado_1 != Lado_3 || Lado_1 == Lado_3 && Lado_1 != Lado_2 || Lado_2 == Lado_3 && Lado_2 != Lado_1){
        puts("ES UN TRIANGULO ISOCELES");
    }  
	 else if(Lado_1 == Lado_2 && Lado_3 == Lado_2){
        puts("ES UN TRIANGULO EQUILATERO");
    }else{
        puts("ES UN TRIANGULO ESCALENO");
    }  
    return 0; 
}


