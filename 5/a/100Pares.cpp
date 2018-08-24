/*
*Programa: Generar un arreglo con los 100 primeros numeros pares y muestre su suma  
*Fecha: 23 de Agosto del 2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros[100];
	int i = 0, suma = 0, con = 0;
	for(i = 1; i <= 200; i++){
		if(i % 2 == 0){			
			numeros[con] = i;			
			con++;			
		}		
	}
	for(i = 0; i<con; i++){
		printf("%d\n", numeros[i]);
		suma = suma + numeros[i];
	}
	printf("La suma total es: %d\n", suma);

	return 0;
}

