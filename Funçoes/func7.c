//Calcule o erro médio quadrático entre dois vetores A e B de dimensão N gerados aleatoriamente. Pesquise a equação.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MX 10

//Cabeçalho de protótipos de funções
void preencher(int*, int, int*);
void exibir(int* , int, int*);
void desvio(int* p, int t, float*);
void variancia(int* , int, int* );
void desvioPadrao(int* , int, int*);

int main(int argc, char* argv[]){
	//Entrada de dados do software
	
	if(argc!=2){
		printf("Formato de execução: <TamanhoVetor>\t");
		exit(1);
	}

	int tam, vA, vB, mid, var, desvioP;
	int *p=(int*) malloc(tam * sizeof(int));
	float d;

	tam = atoi(argv[2]);

	//Processamento
	preencher(p, tam, &vA);
	printf("\n");
	
	preencher(p, tam, &vB);
	printf("\n");

	puts("Vetores gerados de A \n");
	exibir(p, tam, &vA);
	printf("\n");

	puts("Vetores gerados de B \n");
	exibir(p, tam, &vB);
	printf("\n");

	//Saída do Software
	desvio(p, tam, &d);
	printf("\n");

	variancia(p, tam, &var);
	printf("\n");

	desvioPadrao(p, tam, &desvioP);
	printf("\n");

	return 0;
}
//Preenche os vetores A e B
void preencher(int* p, int t, int* v){
	int k;
	srand(time(NULL));

	for(k=0; k<t; k++){
		*(p+k)=rand()%MX;
	}
}
//Exibe os vetores A e B criados
void exibir(int* p, int t, int* v){
	int k;
	
	for(k=0; k<t; k++){
		printf("Vetor gerado randômicamente: [%d]\n", *(p+k));
	}
}

//Realiza o cálculo da média e em seguida realiza o desvio padrão.
void desvio(int* p, int t, float* desvio){
	int k, soma;
	float mid=0, d;

	for(k=0; k<t; k++){
		soma += *(p+k);
		mid = soma/t;
	}
	
	printf("A MÉDIA ARITMÉTICA É: [%.2f]\n", mid);

	for(k=0; k<t; k++){
		d = *(p+k) - mid;
	}
	printf("Resultado do Desvio(VETOR - MÉDIA): [%.2f]\n", d);
}

//Realiza o somatório da variância
void variancia(int* p, int t, int* var){
	int k, result;
	float mid;

	for(k=0; k<t; k++){
		result += pow(*(p+k) - mid, 2);
	} 
	printf("Resultado da Variância: [%d]\n", result);
}

//Realiza o desvio padrão
void desvioPadrao(int* p, int t, int* dp){
	int desvio, var;
	
	desvio = sqrt(var);
	printf("O Resultado do Erro médio quadrático é: [%d]\n", desvio);
}