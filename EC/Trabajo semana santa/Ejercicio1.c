#include <stdio.h>
#include <math.h>

int menu();
int divisores(int numeroLeido);
int esPrimo(int numeroLeido);
void multiplos(int numeroLeido, int numeroInicial, int numeroFinal);

int main(){
	
	float valorA, valorB, valorC;
	float resultado1, resultado2;
	int leerNumerodivisores;
	int cantidadDeDivisores;
	int leerNumeroPrimo;
	int leerNumeroMultiplo;
	int leerRangoInferior, leerRangoSuperior;
	int numeroMenu;
	
	
	do{
		numeroMenu = menu();
		switch(numeroMenu){
			
			case 1:
				printf("Ingrese el valor de a, b y c:\n");
				do{
					scanf("%f", &valorA);
					
					if(valorA==0){
						printf("Error, ingrese un numero diferente a 0\n");
					}
				}while(valorA==0);
					
				scanf("%f", &valorB);
				scanf("%f", &valorC);
				if((pow(valorB,2)-4*valorA*valorC)<0){
					printf("no tiene solucion dentro de los numeros reales\n");
				}else{
					resultado1 = (-valorB+sqrt(pow(valorB,2)-4*valorA*valorC))/2*valorA;
					resultado2 = (-valorB-sqrt(pow(valorB,2)-4*valorA*valorC))/2*valorA;
					printf("los resultados son %f y %f\n", resultado1, resultado2);
				}
				break;
				
			case 2:
				
				do{
				
					printf("Ingrese un numero\n");
					scanf("%d", &leerNumerodivisores);
					if(leerNumerodivisores<1){
						printf("Error, ingrese un numero mayor que 0\n");
					}
				}while(leerNumerodivisores<1);
				
				cantidadDeDivisores = divisores(leerNumerodivisores);
				printf("El numero %d tiene %d divisores\n", leerNumerodivisores, cantidadDeDivisores);
				break;
				
			case 3:
				
				printf("Ingrese un numero\n");
				do{
					scanf("%d", &leerNumeroPrimo);
					if(leerNumeroPrimo<1){
						printf("Error, ingrese un numero mayor que 0\n");
					}
				}while(leerNumeroPrimo<1);
				
				if(esPrimo(leerNumeroPrimo)==1){
					printf("el numero %d es primo\n\n", leerNumeroPrimo);
				}else{
					printf("el numero %d no es primo\n\n", leerNumeroPrimo);
				}
				break;
				
			case 4:
				printf("Ingrese un numero\n");
				do{
					scanf("%d", &leerNumeroMultiplo);
					if(leerNumeroMultiplo<1){
						printf("Error, ingrese un numero mayor que 0\n");
					}
				}while(leerNumeroMultiplo<1);
				printf("Ingrese los rangos inferior y superior\n");
				do{
					scanf("%d", &leerRangoInferior);
					scanf("%d", &leerRangoSuperior);
					
					if(leerRangoInferior>leerRangoSuperior){
						printf("Error, el rango inferior debe ser menor o igual que el rango superior\n");
					}
				}while(leerRangoInferior>leerRangoSuperior);
				multiplos(leerNumeroMultiplo, leerRangoInferior, leerRangoSuperior);
				break;
			case 5:
				
				printf("¡Hasta otra!\n");
				break;
		}
		
	}while(numeroMenu!=5);
	return 0;
}

int menu(){

	int opcionDelMenu=0;
	
	do{
		printf("\nElija una opcion del menu:\n\n");
		printf("1) Resolver ecuacion de segundo grado\n");
		printf("2) Calcular numero de divisores de un numero\n");
		printf("3) Saber si un numero es primo\n");
		printf("4) Imprimir los multiplos de un numero de un rango dado\n");
		printf("5) Salir\n");
		printf("->");
		scanf("%d", &opcionDelMenu);
		if((opcionDelMenu<1) || (opcionDelMenu>5)){
		
			printf("Error, introduzca una de las opciones del menu\n");
		}
	}while((opcionDelMenu<1) || (opcionDelMenu>5));
	
		
	return opcionDelMenu;
}

int divisores(int numeroLeido){
	
	int i;
	int numeroDeDivisores=0;
	for(i=1;i<=numeroLeido;i++){
	
		if(numeroLeido%i==0){
			
			numeroDeDivisores++;
		}
	}
	
	return numeroDeDivisores;
}

int esPrimo(int numeroLeido){
	
	int esPrimo;
	if(divisores(numeroLeido)<=2){
		esPrimo=1;
	}else{
		esPrimo=0;
	}
	
	return esPrimo;
}

void multiplos(int numeroLeido, int numeroInicial, int numeroFinal){

	int i;
	
	printf("los multiplos son: ");
	for(i=numeroInicial;i<=numeroFinal;i++){
		
		if(i%numeroLeido==0){
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
}