//Calcule o erro médio quadrático entre dois vetores A e B de dimensão N gerados aleatoriamente. Pesquise a equação.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>
#define MX 10

//Cabeçalho de protótipos de funções
void preencher(int* p, int t);
void exibir(int* , int);
void mse(int *, int *, int, float *);

int main(int argc, char* argv[]){
	
	//Entrada de dados do software
	if(argc!=2){
		printf("Formato de execução: <TamanhoVetor>\t");
		exit(1);
	}

	int tam= atoi(argv[1]);
	int mid, var, desvioP;
	int *pA=(int*) malloc(tam * sizeof(int));
	int *pB=(int*) malloc(tam * sizeof(int));
	float respMSE;

	// Geracao dos dados	
	preencher(pA, tam);
	sleep(5);
	preencher(pB, tam);
	
	puts("Vetores gerados de A \n");
	exibir(pA, tam);
	printf("\n");

	puts("Vetores gerados de B \n");
	exibir(pB, tam);
	printf("\n");

	// Processamento
	mse(pA, pB, tam, &respMSE);

	//Saída do Software
	printf("Resultado: %.2f\n",respMSE);

	free(pA);
	free(pB);
	return 0;
}
//Preenche os vetores A e B
void preencher(int* p, int t){
	int k;
	srand(time(NULL));

	for(k=0; k<t; k++){
		*(p+k)=rand()%MX;
	}
}

//Exibe os vetores A e B criados
void exibir(int* p, int t){
	int k;
	printf("Vetor gerado randômicamente:\n");
	for(k=0; k<t; k++){
		printf("\t[%d]\n", *(p+k));
	}
}

//Calcula o Erro Médio Quadrático (Mean Square Error).
void mse(int *p, int *q, int t, float *r){
	int s = 0;
	int k, d;
	 
	for (k=0; k<t; k++){
		d = *(p+k) - *(q+k);
		s += pow(d,2); //  s = s + pow(d,2);
	}

	*r = (float) s / (float) t;

}