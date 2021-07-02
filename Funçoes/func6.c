#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 10

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
	int *p=(int*) calloc(tam, sizeof(int));
	tam= atoi(argv[1]);

	//Processo
	preencher(p, tam); 
	printf("\n");
	exibir(p, tam);
	printf("\n");

	//Saída do software
	media(p, tam);
	printf("\n");
	mediana(p, tam);
	printf("\n");
	moda(p, tam);
	
	free(p);
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
	int k, v[t], soma;
	float mid=0;

	for(k=0; k<t; k++){
		soma += *(p+k);
		mid = soma/t;
	}
	
	printf("A MÉDIA ARITMÉTICA É: %.2f\n", mid);
}
//Realiza o cálculo da mediana no vetor.
void mediana (int *p, int t){
	
	int i,k, res;
	int v[t];

//Ordena por seleção crescente os vetores alocados dinâmicamente 	

	for(i=0; i<t-1; i++){
  		for(k=i+1; k<t; k++){
    		if(*(p+k)<*(p+i)){
      		res=*(p+i);
      		*(p+i)=*(p+k);
      		*(p+k)=res;
    		}
  		}
	}
	
	puts("ORDENAÇÃO DOS VETORES - MEDIANA");
	printf("\n");
	for(k=0; k<t; k++){
 	 	printf("%4d ", *(p+k));
	}
	printf("\n");

	//Verificando paridade da mediana.
		if(t%2==0){
			v[t]=(*(p+k/2) + (*(p+k/2-1))) / 2;
			printf("A mediana é: [%d] \n", v[t]);
		} else if(t%2==1){
			v[t]=(*(p+k/2));
			printf("A mediana é: [%d] \n", v[t]);
		}
}
	
	
//Realiza o cálculo da moda no vetor.
void moda (int *p, int t){
	
	int k, j, moda, aux=0,  frequencia[t];

	p=(int *) calloc(frequencia[t],sizeof(int)); 

//Somatório da frequencia: conta quantas vezes cada número aparece, assim realizando o cálculo da moda.
	for(k=0; k<t; k++){ 
        for(j=k+1; j<t; j++){
			
			if(*(p+k)==*(p+j)){
			++frequencia[*(p+k)];
			
			if(frequencia[*(p+k)]> aux){
				aux = frequencia[*(p+k)];
				moda = k;
				}
			}
		}	 		  
	}
	puts("ACHANDO A FREQUÊNCIA DE OCORRÊNCIA \n");
	printf("A MODA É: [%d]\n", moda);	
}

//Escreva um programa em C que apresente a m ́edia, a mediana e a moda de um vetor de inteiros gerados aleatoriamente em tempo de execução