#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10
// Protótipos
void preencher(int *, int);
void exibir(int *, int);
void obterMenorValor(int *, int, int *);
int *obterEnderecoMenorValor(int *, int);

int main (int argc, char *argv[]){

  if (argc!=2){
		printf("Formato: \n\t%s <tamanhoVetor>\n",argv[0]);
		exit(1);
	}

	int tam = atoi(argv[1]);
	int *p = (int *) malloc(tam * sizeof(int));
	int menor;

	preencher(p, tam);
	exibir(p,tam);
	obterMenorValor(p, tam, &menor);
	puts("====");
	printf("Menor valor - [%p]: %d\n",obterEnderecoMenorValor(p, tam), menor);
	free(p);

	return 0;
}

void preencher(int *p, int t){
	int k;
	srand(time(NULL));
	for (k=0; k<t; k++){
		*(p+k) = rand() % MX;
	}
}

void exibir(int *p, int t){
	int k;
	for(k=0; k<t; k++){
		printf("[%p] - %d \n",p+k,*(p+k));
	} 
}

void obterMenorValor(int *p, int t, int *pm){
	int k;
	*pm = *p;
	for (k=1; k<t; k++){
		if (*pm > *(p+k)){
			*pm = *(p+k);	
		}
	}
}
int *obterEnderecoMenorValor(int *p, int t){
	int k, *pm, menor;
	menor = *p;
	pm = p;
	for (k=1; k<t; k++){
		if (menor > *(p+k)){
			menor = *(p+k);
			pm = p+k;
		}
	}
	return pm;
}