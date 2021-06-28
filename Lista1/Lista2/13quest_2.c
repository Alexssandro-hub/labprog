#include <stdio.h>
/*Elabore um programa que calcule o somatorio de todos os numeros pares pertencentes a faixa A,B
especificada pelo usuario. O programa deve funcionar tanto para A > B quanto para B > A.*/
int main(void){

int n, A, B, somatorio = 0, i;

printf("\n\tFavor, digitar o numero referente ao intervalo A: \n\t");
scanf("%d", &A);

printf("\n\tFavor, digitar o numero referente ao intervalo B: \n\t");
scanf("%d", &B);

if (A>B){
for (i = 1; i <= A; i--){
somatorio = somatorio + A * (i - 1);
printf("%d\n", somatorio);
} 
}else {
for (i = 1; i <= B; i++){
somatorio = somatorio + A * (i + 1);
printf("%d\n", somatorio);
}
}   
return 0;
  }