/* Orlando Urbano Trejo @Lando
 * Fecha: 17-07-2023
 * Correo: orlandourbanotrejo@gmail.com
 *
 * Algortimo que calcula el descuento de 3 tipos de vestidos */

#include <stdio.h>
int main(){
    printf("----VESTIDOS----\n1) Grandes $500\n2) Mediana $400\n3) Chica $300\n");
    int vestido, cantidad;
    float total;
	// Entrada de datos
    puts("Elige la marca que deseas comprar (1-3): ");
    scanf("%d",&vestido);
	// condicionales
    if(vestido == 1){
    	puts("Numero de vestidos que deseas comprar: ");
        scanf("%d",&cantidad);
        total = cantidad * 500;
    }
    else if(vestido == 2){
       	puts("Numero de vestidos que deseas comprar: ");
        scanf("%d",&cantidad);
        total = cantidad * 400;
    }
    else if(vestido == 3){
        puts("Numero de vestidos que deseas comprar: ");
        scanf("%d",&cantidad);
        total = cantidad * 300;
    }
    printf("Monto total de la venta: $%.2f\n",total);
    return 0;
}
