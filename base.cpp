#include <stdio.h>
#include <stdlib.h>

int main(){
	int decimal;

	printf("Decimal: ");
	scanf(" %i", &decimal);
//scanf permite introducir un numero en consola
//el espacio entre comillas saca del tubo todos los espacios en blanco,
//se considera espacio blanco los tabuladores y saltos de linea
//%i desde la tuberia lee un entero
//&direccion de variable ,se llama paso por referencia
	//Hacer
	//   Imprimir decimal % 2
	//   decimal = decimal / 2
	//mientras decimal / 2 > 0 ........5d
	do {
		printf("%i", decimal %2 );
		decimal /=2;
	}while (decimal>0);

	printf("\n");

return EXIT_SUCCESS;
}

