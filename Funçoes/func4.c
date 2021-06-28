#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 100
#define tam 10
//Protótipos - Seleção de funções do software
int preencher(int *, int);
void exibir(int *, int);
void obterMenorValor(int *, int, int *);
void obterMaiorValor(int *, int, int *);

int main(int argc, char *argv[]){

  int *p=(int*) malloc(tam*sizeof(int));
  int menor, maior;
  int normaliza;

  //Processamento do software.
  puts("Exibindo vetores: \n");
  preencher(p,tam);
  exibir(p,tam);
  printf("===============\t\n");

  //Saída do Algoritmo
  puts("Mostrando Valores Menores: \n");
  obterMenorValor(p, tam, &menor);
  printf("Menor valor: [%d] \n", menor);
  printf("===============\t\n");

  puts("Mostrando Valores Maiores: \n");
  obterMaiorValor(p, tam, &maior);
  printf("Maior valor: [%d] \n", maior);
  printf("===============\t\n");

  /*X' = X − min(X) / max(X) − min(X);
  onde min() e max() correspondem ao menor e maior do vetor, respectivamente.*/
  int x = preencher(p, tam);
  normaliza = (x - menor)/(maior - menor); 
  printf("Normalizando Dados: [%d]\n", normaliza);

  free(p); // Libera o espaço na memória alocado dinâmicamente 
  return 0;
}

//Preenche vetores pseudo-aleatórios.
int preencher(int *p, int t){
	int k;
	srand(time(NULL));
	for (k=0; k<t; k++){
		*(p+k) = rand() % MX;
	}
  return *(p+k);
}

//Exibe os vetores pseudo-aleatórios.
void exibir(int *p, int t){
	int k;
	for(k=0; k<t; k++){
		printf("[%d] \n",*(p+k));
	} 
}

//Obtém o menor valor no range dos vetor.
void obterMenorValor(int *p, int t, int *pmenor){
	int k;
	*pmenor = *p;

	for (k=1; k<t; k++){
		if (*pmenor > *(p+k)){
			*pmenor = *(p+k);	
		}
	}
}
//Obtém o maior valor no range dos vetor.
void obterMaiorValor(int *p, int t, int *pmaior){
	int k;
	*pmaior = *p;

	for (k=1; k<t; k++){
		if (*pmaior < *(p+k)){
			*pmaior = *(p+k);	
		}
	}
}

