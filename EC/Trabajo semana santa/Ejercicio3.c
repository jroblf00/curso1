#include <stdio.h>

#define TAM_X 3
#define TAM_Y 12

void empieza_turno(int puestosDeTrabajo[TAM_X][TAM_Y]);
void fin_turno(int puestosDeTrabajo[TAM_X][TAM_Y]);
void descanso(int puestosDeTrabajo[TAM_X][TAM_Y]);
void fin_descanso(int puestosDeTrabajo[TAM_X][TAM_Y]);
void imprime_linea(int puestosDeTrabajo[TAM_X][TAM_Y], int lineaALeer);
void imprime_lineas(int puestosDeTrabajo[TAM_X][TAM_Y]);


int main(){

	int menu;
	int trabajadores[TAM_X][TAM_Y];
	int linea;
	
	empieza_turno(trabajadores);
	
	do{
	
		printf("Eliga una opcion:\n");
		printf("1) Operario que va al descanso\n");
		printf("2) Operario que vuelve a su puesto de trabajo\n");
		printf("3) Mostrar estado de una linea\n");
		printf("4) Mostrar estado de la fabrica\n");
		printf("5) Fin de turno\n");
		printf("->");
		scanf("%d", &menu);
		
		switch(menu){
		
			case 1:
				descanso(trabajadores);
				break;
			case 2:
				fin_descanso(trabajadores);
				break;
			case 3:
				printf("Ingrese la linea que desea imprimir\n");
				do{
					scanf("%d", &linea);
					if((linea<1) || (linea>3)){
					
						printf("Error, ingrese un valor del 1 al 3\n");
					}
				}while((linea<1) || (linea>3));
				imprime_linea(trabajadores,linea);
				break;
			case 4:
				imprime_lineas(trabajadores);
				break;
			case 5:
				fin_turno(trabajadores);
				imprime_lineas(trabajadores);
				break;
			default:
				printf("Error, eliga una de las opciones del menu\n");
				break;
		}
		
	}while(menu!=5);
	
	return 0;
}

void empieza_turno(int puestosDeTrabajo[TAM_X][TAM_Y]){
	
	int i,j;
	
	for(i=0;i<TAM_X;i++){
		for(j=0;j<TAM_Y;j++){
			
			puestosDeTrabajo[i][j]=1;
		}
	}
}

void fin_turno(int puestosDeTrabajo[TAM_X][TAM_Y]){
	
	int i,j;
	
	for(i=0;i<TAM_X;i++){
		for(j=0;j<TAM_Y;j++){
			
			puestosDeTrabajo[i][j]=0;
		}
	}
}

void descanso(int puestosDeTrabajo[TAM_X][TAM_Y]){

	int linea;
	int columna;
	
	printf("Indique la lina del puesto de trabajo\n");
	do{
		scanf("%d", &linea);
		
		if((linea<1) || (linea>3)){
		
			printf("Error, ingrese un valor del 1 al 3\n");
		}
	}while((linea<1) || (linea>3));
	
	
	printf("Indique la columna del puesto de trabajo\n");
	do{
		scanf("%d", &columna);
		if((columna<1) || (columna>12)){
			printf("Error, ingrese un valor del 1 al 12\n");
		}
	}while((columna<1) || (columna>12));
	
	puestosDeTrabajo[linea-=1][columna-=1] = 0;
}

void fin_descanso(int puestosDeTrabajo[TAM_X][TAM_Y]){
	
	int linea;
	int columna;
	do{
		printf("Indique la lina del puesto de trabajo\n");
		scanf("%d", &linea);
		
		if((linea<1) || (linea>3)){
		
			printf("Error, ingrese un valor del 1 al 3\n");
		}
	}while((linea<1) || (linea>3));
	
	do{
		printf("Indique la columna del puesto de trabajo\n");
		scanf("%d", &columna);
		if((columna<1) || (columna>12)){
			printf("Error, ingrese un valor del 1 al 12\n");
		}
	}while((columna<1) || (columna>12));
	
	puestosDeTrabajo[linea-=1][columna-=1] = 1;

}

void imprime_linea(int puestosDeTrabajo[TAM_X][TAM_Y], int lineaALeer){
	
	int i;
	lineaALeer-=1;
	
	printf("\n");
	for(i=0;i<TAM_Y;i++){
	
		printf("%d\n", puestosDeTrabajo[lineaALeer][i]);
	}
	printf("\n");
}

void imprime_lineas(int puestosDeTrabajo[TAM_X][TAM_Y]){
	
	int i,j;

	for(i=0;i<TAM_Y;i++){
		for(j=0;j<TAM_X;j++){
			
			printf("%d\t", puestosDeTrabajo[j][i]);
		}
		printf("\n");
	}
}