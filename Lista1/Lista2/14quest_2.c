#include <stdio.h>
//Elabore um programa que apresente a quantidade de numeros divis ́ıveis por 3 pertencentes a faixa A,B especificada pelo usu ́ario.
// O programa deve funcionar tanto para A > B quanto para B > A.
int main () {

int A, B, number,i, qtdNumbers;

printf("Favor, digitar um numero referente a um intervalo A: \n");
scanf("%d", &A);
printf("Favor, digitar um numero referente a um intervalo B: \n");
scanf("%d", &B);
printf("Favor, digitar um numero referente ao numerador da divisão: \n");
scanf("%d", &number);

if (A>B) {

  for (i=0; i<A; i++) {
    number = number/3;
    number++;
    if (number <= A) {
      printf("Pertence ao intervalo!\n");  
    } else 
    printf("Não pertence ao intervalo!\n"); 
  }

} else {
  for (i=0; i<B; i++) {
    number = number/3;
    number++;
    if (number <= B) {
      printf("Pertence ao intervalo!\n");
      break;
    } else 
    printf("Não pertence ao intervalo!\n");
  }
}
  qtdNumbers = number;
  printf("Quantidade de numeros são: %d\n", qtdNumbers);
  return 0;
}