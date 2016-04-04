//Juan Carlos Robles Fernandez
#include <stdio.h>

void ingresarDatos();
void sumarDatos();
void imprimirDatos();

int sumaDeNumeros[10];

int main(){

	ingresarDatos();
	sumarDatos();
	imprimirDatos();
	
	return 0;
}

void ingresarDatos(){

	int i;
	printf("Ingrese 10 numeros\n");
	
	for(i=0;i<10;i++){
		scanf("%d", &sumaDeNumeros[i]);
	}
}

void sumarDatos(){

	int i,j;
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
		
			sumaDeNumeros[i]=sumaDeNumeros[i]+sumaDeNumeros[j];
		}
	}
}

void imprimirDatos(){

	int i;
	
	printf("Los valores son: ");
	
	for(i=0;i<10;i++){
		
		printf("%d ", sumaDeNumeros[i]);
	}
	printf("\n");
}