#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10
// Protótipos
void preencher(int *, int);
void exibir(int *, int);
void obterMenorValor(int *, int, int *);
void obterEnderecoMenorMaiorValor(int*, int, int**);
int *obterEnderecoVetorMaiorMenor (int *, int);

int main (int argc, char *argv[]){

  if (argc!=2){
		printf("Formato: \n\t%s <tamanhoVetor>\n",argv[0]);
		exit(1);
	}

	int tam = atoi(argv[1]);
	int *p = (int *) malloc(tam * sizeof(int));
	int menor;
  int *v[2];//Apenas maior e menor 

	preencher(p, tam);
	exibir(p,tam);
	obterMenorValor(p, tam, &menor);
  	obterEnderecoMenorMaiorValor(p, tam, v);
	puts("====");
	printf("Menor valor - [%d]\n",menor);
  	puts("====");
  	printf("Menor valor [%p] - Maior valor [%p] \n", *v , *(v+1));
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
int *obterEnderecoVetorMaiorMenor(int *p, int t){
	int k, *pmenor, menor;
	menor = *p;
	pmenor = p;
 
	for (k=1; k<t; k++){
		if (menor > *(p+k)){
			menor = *(p+k);
			pmenor = p+k;
		}
	}
  //*result = pmaior && pmenor; // Incorreto.
	return pmenor;
}

void obterEnderecoMenorMaiorValor(int *p, int t, int**v){
  int k, menor, maior;
	menor = *p; 
	*v=p; //pv[0]= p; Menor valor.
  *(v+1) = p; // Maior valor.
 
	for (k=1; k<t; k++){
		if (menor > *(p+k)){
			menor = *(p+k);
			*v= p+k;
		}
    	if (maior < *(p+k)){
			maior = *(p+k);
			*(v+1)= p+k;
		}
	}
}