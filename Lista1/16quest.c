#include <stdio.h>

int main () {

float salario_b, salario_l, hora, dia, desconto_INSS; 

printf("A empresa paga 50$ por hora trabalhada!\n");

printf("Por favor informe-nos a quantidade de hora trabalhada por dia: \n");
scanf("%f", &hora);
printf("Por favor informe-nos a quantidade de dias trabalhos por mês: \n");
scanf("%f", &dia);

printf("Você trabalhou essa quantidade de horas: %.2f\n", hora);
printf("Você trabalhou essa quantidade de dias por mês: %.2f\n", dia);
salario_b = (hora * 50) * dia;
printf("Seu salário bruto é: %.2f $\n", salario_b);

printf("O desconto do INSS em seu salário bruto é de 10%%!\n");
desconto_INSS = ((salario_b * 10)/100);

printf("O desconto mediante ao INSS é: %.2f\n", desconto_INSS);
printf("Professor, seu salário liquido é mediante ao salário bruto com o desconto do INSS.\n");

salario_l = salario_b - desconto_INSS;
printf("Professor, seu salário líquido é: %.2f $\n", salario_l);

  return 0;
}