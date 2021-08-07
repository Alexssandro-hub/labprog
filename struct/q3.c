#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10

struct dados{
	int *p; //Ponteiro para vetor
	unsigned t;
	float m;
};

//Protótipo de função
float media (int*, unsigned);
void imprimirDados (struct dados, unsigned);

int main (int argc, char* argv[]){
	
	int *pV = NULL;
	int k;
	unsigned tam;
	struct dados d1;

	srand(time(NULL));

	if(argc < 2){
		printf("\n\t\t %s Formato: <Tamanho> \n", argv[0]);
		exit (1);
	}

	tam = atoi(argv[1]);
	pV = (int *) malloc(tam * sizeof(int));
	
	//Preencher o vetor
	for(k=0; k<tam; k++){
		*(pV+k)= rand () % MX;
	}

	//Validação de pV
	d1.p = pV;
	d1.t = tam;
	d1.m = media(pV, tam);

	//Exibir dados da Estrutura
	imprimirDados(d1, tam);

	free(pV);
	return 0;
}

float media (int* pv, unsigned t){
	float m;
	int s = 0;
	int k;

	for(k=0; k<t; k++){
		s+= *(pv+k);
	}

	m = (float) s / t;

	return m;
}

void imprimirDados (struct dados d, unsigned tam){
	int k;
	
	printf("Vetor gerado %u elementos \n", d.t);
	for(k=0; k<tam; k++){
		printf(" %d \n", *(d.p + k)); //Acessa diretamente pela estrutura. 
	}

	printf("Valor da média: %.2f", d.m);
}