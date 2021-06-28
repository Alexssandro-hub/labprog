#include <stdio.h>
#include <stdlib.h>
//Protótipos
void sum (int, int, int*);
void multi (int, int, int*);
void ImprimeSaida(int z);
void ImprimeMult(int w);

int main(int argc, char *argv[]){
  
  int s, n1, n2;
  
  //Emtrada de Dados
  if(argc!=4){
    printf("Formato:\n\t%s <num1><num2><op>\n", argv[0]);
    exit(1);
  }

  n1 = atoi(argv[1]);
  n2 = atoi(argv[2]);

  //Processamento
  switch (atoi(argv[3])){
    case (1):
    sum(n1,n2,&s);
    ImprimeSaida(s);
    break;
    case (2):
    multi(n1,n2,&s);
    ImprimeMult(s);
    break;
    default:
    puts("Operação inexistente!\n\t");
    exit(2);
  }
  return 0;
} 
//Funções declaradas para realizar o processamento
void sum (int a, int b, int *p){
  *p=a+b;
}

void multi(int a, int b, int*p){
  *p=a*b;
}

void ImprimeSaida(int z){
  printf("A soma é: %d\n", z);
}
void ImprimeMult(int w){
  printf("A multiplicação é: %d\n", w);
}