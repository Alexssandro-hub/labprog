#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 100

//Protótipos e cabeçalho de funções
void preencher(int *, int);
void exibir(int*, int);
void media (int *, int);
void mediana (int *, int);
void moda (int *, int);

int main(int argc,char* argv[]){
	//Entrada de Dados do Software
	if (argc!=2){
		printf("Formato: <Tamanho vetor>\n");
		exit(1);
	}
	
	int tam, soma;
	int *p=(int*) malloc(tam*sizeof(int));
	tam= atoi(argv[1]);

	//Processo
	preencher(p, tam);
	exibir(p, tam);
	media(p, tam+1);
	
	
	return 0;
}
//Preenche os vetores com números pseudo-aleatórios.
void preencher(int *p, int t){
	int k;
	srand(time(NULL));
	
	for(k=0; k<=t; k++){
		*(p+k)=rand() % MX;
	}
}
//Exibe os vetores
void exibir(int *p, int t){
	int k;
	for(k=0; k<t; k++){
		printf("[%p] [%d] \n",p+k,*(p+k));
	} 
}

//Realiza o cálculo da média no vetor.
void media (int *p, int t){
	int k, soma;
	float mid;

	for(k=0; k<t; k++){
		soma=*p+*(p+k);
		
	}
	printf("Soma: %d\n", soma);
}
//Realiza o cálculo da mediana no vetor.
void mediana (int *p, int t){

}
//Realiza o cálculo da moda no vetor.
void moda (int *p, int t){

}

//Escreva um programa em C que apresente a m ́edia, a mediana e a moda de um vetor de inteiros gerados aleatoriamente em tempo de execução