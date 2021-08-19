#include <stdio.h>

enum meses {
	jan, fev, mar, abr, maio, jun, jul, ago, set, out, nov, dez
};

int main(){

	enum meses ms;

	char* nomeMes[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

	for (ms = jan; ms <= dez; ms++){
		puts("========");
		printf("Mês atual: %s\n", nomeMes[ms]);
	}

	return 0;
}