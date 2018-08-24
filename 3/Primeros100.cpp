/*
*Programa:  Arreglo que imprima los primeros 100 numeros enteros en orden descendente
*Fecha: 23 de Agosto del 2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros[100];
	int i = 0;
//	inicio el arreglo y lleno los datos
	for(i = 0; i <= 99; i++){
		numeros[i] = i+1;
	}
	//Mostrar los numeros de forma decendente
	for(i = 99; i >= 0; i--){
		printf("%d\n", numeros[i]);
	}		
	return 0;
}

