#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int calc_fatorial(int valor_n) {
	int valor_ft = 1;

	while (valor_n > 1)
	{
		valor_ft = valor_ft * valor_n;
		valor_n--;
		
	}	
	printf("Valor: [%d] \n", valor_ft);
	return valor_ft;
}

int main() {
	

	int v, vf = 0;
	int *pv = &v;
	scanf("%d", &v);
	vf = calc_fatorial(*pv);
	setlocale(LC_ALL, "Portuguese");
	printf("Valor fatorial de: [%d] %c [%d]\n", v, 233, vf);
	return 0;
}