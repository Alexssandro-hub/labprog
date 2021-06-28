#include <stdio.h>
//Elaborar um programa que apresente a m ́edia aritm ́etica dos n ́umeros inteiros existentes entre uma faixa especificada pelo usu ́ario.
int main () {

float media;
unsigned int A,aux,soma, val, i;

printf("\tFavor digite um numero para detectar a faixa de numeros inteiros: \t\n");
scanf("%d", &A);

soma = 0;
i = 0;

while (i < A){

scanf("%d", &val);
i = i + 1;
soma = soma + val;

} printf("\tA soma obtida pelos numeros inteiros são: %d\n\t", soma);

media = soma / A;

printf("\t\t\tA media aritmetica é: %.2f\n\t", media);
    

return 0;
} 


