//primera practica.
#include <stdio.h>

int celsius;
int fahrenheit;

int main(){

	printf("Ingrese la temperatura medida en celsius: ");
	scanf("%d", &celsius);

	fahrenheit=9.0/5.0*celsius+32;
	printf("%dºC corresponden a %dºF\n", celsius, fahrenheit);
}
