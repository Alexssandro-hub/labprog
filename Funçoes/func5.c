#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 100

//Protótipos - Funções
void preencher(float *, int);
void somatorio( float *, int );
int main(int argc, char *argv[]){
  //Entrada de Dados
  if(argc!=2){
    printf("Formato: <TamanhoVetor>! \n");
    exit(1);
  }
  
  float  tam, soma;
  float *p=(float *) malloc(tam*sizeof(int));
  tam = atoi(argv[1]);

  //Processo
  puts("Realizando Somatório dos valores do vetor: ");
  preencher(p, tam);
  somatorio(p, tam);
  free(p);
   return 0;
}

//Preenche os vetores de tipo float 
void preencher(float *p, int t){
  
  int k;
  srand(time(NULL));
  
  for(k=0; k<t; k++){
	  
	  	*(p+k)=rand() % MX;
    	printf("Vetores criados: [%.2f]\n", *(p+k));
  	}
  printf("\n");
}

void somatorio( float *p, int t){
	int i;
	srand(time(NULL));

	for(i=0; i<t;i++){
		for(i=0; i<t; i++)
			*(p+i)=rand() % MX;	
			*(p+i)=(*(p+i)+i) * (i+1); 
		printf("Somatório é: [%.2f]\n", *(p+i)); 
	}
}

//Escreva um programa que some todos os elementos de um vetor de float alocado dinamicamente. A quantidade de elementos devem ser fornecidas por linha de comando. Utilize a funcao rand() para alimentar o vetor com valores pseudo-aleat ́orios.