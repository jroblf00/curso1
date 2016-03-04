#include <stdio.h>

int num_entrada, cont,factorial;
double total=1;
double n=1;

int main(){

	printf("ingrese un numero para calcular el factorial: ");
	scanf("%d", &num_entrada);

	for(cont=0;cont<num_entrada;cont++){

		total=total*n;
		n++;
	}

	printf("el resultado es: %e\n", total);
}
