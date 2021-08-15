//Escreva um programa em C que utilize uma Estrutura estoque que cont ́em uma string com o nomePeca, um n ́umero inteiro para identificar o n ́umero da pe ̧ca, o pre ̧co em ponto flutuante e um elemento inteiro para identificar o n ́umero do pedido.

#include <stdio.h>
#define TAM 3

struct estoque{
	int numPeca;	
	int numPedido;
	char nomePeca[50];
	float preco;
};

int main (){

	struct estoque pedido[TAM];
	int k;

	//Entrada de dados
	for(k=0; k<TAM; k++){

		printf("Favor digitar nome da peça: \n");
		scanf("%s", pedido[k].nomePeca);

		printf("Favor digitar número da peça: \n");
		scanf("%d", &pedido[k].numPeca);

		printf("Favor digitar número do pedido: \n");
		scanf("%d", &pedido[k].numPedido);

		printf("Favor digitar o preço da peça: \n");
		scanf("%f", &pedido[k].preco );
	}


	//Saída de dados
	for(k=0; k<TAM; k++){
		printf("Nome da peça é: %s", pedido[k].nomePeca);
		
		printf("Número da peça é: %d", pedido[k].numPeca);
		
		printf("Preço da peça é: %d", pedido[k].numPedido);
		
		printf("Preço da peça é: %.2f", pedido[k].preco);
	}
	
	
	return 0;
}