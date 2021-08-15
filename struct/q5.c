//Crie uma Estrutura disciplina em que um dos campos corresponde também a uma estrutura professor.

#include <stdio.h>

struct disciplina {
	char nomeDisciplina[30];
	int qtdAulas;
	int notaDisciplina;
};

struct professor{
	char nome[30];
	int idade;
	struct disciplina mat;
};

int main(){
	return 0;
}