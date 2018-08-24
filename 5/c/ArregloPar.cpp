/*
*Programa: Generar un arreglo numero entero de 10 elementos ingresados por el usuario mosstrar en pantalla cuales son pares
*Fecha: 23 de Agosto del 2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros[10];
	
	printf("Ingrese 10 numeros:\n");
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &numeros[i]);
	}
	printf("Los pares son:\n");
	for(int i = 0; i < 10; i++){
		if(numeros[i] % 2 == 0){
			printf("%d\n", numeros[i]);
		}
	}
	

	return 0;
}

