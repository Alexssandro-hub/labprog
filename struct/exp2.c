#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
#define MX 10

struct aluno{
	char matricula[12];
	double nota1;
	double nota2;
	double nota3;
};

int main(){
	
	struct aluno alunos[TAM];
	int k;
	float media;

	srand(time(NULL));

	for(k=0; k<TAM; k++){
		alunos[k].nota1=rand()%MX;
		alunos[k].nota2=rand()%MX;
		alunos[k].nota3=rand()%MX;
	}

	for(k=0; k<TAM; k++){
		printf("nota: %lf\n", alunos[k].nota1);
		printf("nota: %lf\n", alunos[k].nota2);
		printf("nota: %lf\n", alunos[k].nota3);
	}

	for(k=0; k<TAM; k++){
		media = (alunos[k].nota1 + alunos[k].nota2 + alunos[k].nota3)/3;

		printf("Média do aluno é: %lf \n", media);
	}

	return 0;
}