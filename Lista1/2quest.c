#include <stdio.h>

int main () {


	int x;
	char numEmHexa[10];
  char numEmOctal[10];

	printf("Entre com o numero: ");
	scanf("%d", &x);
	sprintf(numEmHexa, "%X", x);
	printf("Numero em hexa: %s\n", numEmHexa);

  sprintf(numEmOctal, "%o", x);
  printf("Numero em octal: %s\n", numEmOctal);


  return 0;
}