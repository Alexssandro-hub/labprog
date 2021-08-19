#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MX 100

typedef struct root {
	int x;
	int y;
	int z;
	float media;
} Node;

void media (Node *);

int main(){
	//Entrada de Dados
	Node *pV = NULL;
	int k;

	pV = (Node*) malloc(sizeof(Node)*TAM);

	//Processamento
	srand(time(NULL));
	
	//Preenchendo vetores x,y,z;
	for(k=0; k<TAM; k++){
		(pV+k)->x = rand() % MX;
		(pV+k)->y = rand() % MX;
		(pV+k)->z = rand() % MX;
	}

	for(k=0; k<TAM; k++){
		media(pV+k);
	}

	//Saída e impressão dos dados 
	for(k=0; k<TAM; k++){
		printf("==== EST. [%d]\n", k);
		printf("x: %d\n", (pV+k)->x);
		printf("y: %d\n", (pV+k)->y);
		printf("z: %d\n", (pV+k)->z);
		printf("média aritmética: %.2f\n", (pV+k)->media);
	}

	return 0;
}

//Função calcula média aritmética
void media (Node *p){
	p->media =(float) ((p->x + p->y + p->z)/3.0);
}