#include <stdio.h>

int main(){

float contrato=50.25, dia, salario, bonus, imposto, salfinal;

printf("Por favor nos diga a quantidade de dias trabalhados?\n");
scanf("%f", &dia);
salario = contrato*dia;
imposto = (salario * 10/100);
salfinal = salario - imposto;

if (dia<10){
  printf("Não tem direito à gratificação!\n");
  printf("Imposto de renda em cima do valor bruto! %.2f\n", imposto);
  printf("Seu salário final é: %.2f\n", salfinal);
} else if (10 < dia & dia < 20){
  bonus = (salario * 20/100);
  printf("Você recebeu 20 por cento da gratificação!\n");
  printf("Imposto de renda em cima do valor bruto: %.2f\n", imposto);
  printf("Seu salário final é: %.2f\n",salfinal);
} else {
  bonus = (salario * 30/100);
  printf("Você recebeu 30 por cento de gratificação!\n");
  printf("Imposto de renda em cima do valor bruto! %.2f\n", imposto);
  printf("Seu salário final é: %.2f\n",salfinal);
}
 return 0;
}