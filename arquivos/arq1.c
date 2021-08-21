#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3
#define MX 100

typedef struct N{
	int x, y;
} coordenada;

void escreverArq(coordenada *, int, char*);
void exibirDados(coordenada *, int);
unsigned lerArq(coordenada *, char*);

int main(int argc, char* argv[]){

	int k;

	coordenada vetorCoordenada[TAM];
	coordenada vetorRecuperado[TAM];

	unsigned qtdLidos;

	//Preencher os dados

	srand(time(NULL));

	for(k=0; k<TAM; k++){
		vetorCoordenada[k].x = rand () % MX;
		vetorCoordenada[k].y = rand () % MX;
	}

	exibirDados(vetorCoordenada, TAM);
	escreverArq(vetorCoordenada, TAM, argv[1]);

	qtdLidos = lerArq(vetorRecuperado, argv[1]);

	printf("\n\tDados lidos: %u\n", qtdLidos);
	exibirDados(vetorRecuperado, qtdLidos);

	return 0;
}
void escreverArq(coordenada *p, int tam, char* nomeArq){

	FILE *fp;
	int k;

	if(!(fp = fopen(nomeArq, "wb"))){

		printf("Erro ao escrever no arquivo: %s\n", nomeArq);
		exit(1);
	}

	for(k=0; k<tam; k++){
		fwrite((p+k), sizeof(coordenada), 1, fp);
	}

	fclose(fp);
}

unsigned lerArq(coordenada *p, char* nomeArq){

	FILE *fp;
	coordenada temp;
	size_t qtd;
	

	if(!(fp = fopen(nomeArq, "rb"))){

		printf("Erro na leitura do arquivo: %s\n", nomeArq);
		exit(1);
	}

	int k=0;
	while(1){
		qtd = fread(&temp, sizeof(coordenada), 1, fp);

		if(qtd<1) break;

		*(p+k) = temp;	
		k++;
	}

	fclose(fp);

	return k;
}

void exibirDados(coordenada *p, int tam){
	int k;
	
	for(k=0; k<TAM; k++){
		printf("Indice: %d\n",k);
		printf("x: %d - y: %d \n", (p+k)->x, (p+k)->y);
		printf("============\n");
	}
}