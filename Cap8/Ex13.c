#include <stdio.h>

enum mesAno {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro} mA;
int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int
main()
	{
	int n;
	
	puts("Entre com um numero de 1 a 12:");
	scanf("%d", &n);

	if(Janeiro == n)
		{
		printf("Janeiro - %d dias\n", dias[n-1]);
		}
	if(Fevereiro == n)
		{
		printf("Fevereiro - %d dias\n", dias[n-1]);
		}
	if(Marco == n)
		{
		printf("Marco - %d dias\n", dias[n-1]);
		}
	if(Abril == n)
		{
		printf("Abril - %d dias\n", dias[n-1]);
		}
	if(Maio == n)
		{
		printf("Maio - %d dias\n", dias[n-1]);
		}
	if(Junho == n)
		{
		printf("Junho - %d dias\n", dias[n-1]);
		}
	if(Julho == n)
		{
		printf("Julho - %d dias\n", dias[n-1]);
		}
	if(Agosto == n)
		{
		printf("Agosto - %d dias\n", dias[n-1]);
		}
	if(Setembro == n)
		{
		printf("Setembro - %d dias\n", dias[n-1]);
		}
	if(Outubro == n)
		{
		printf("Outubro - %d dias\n", dias[n-1]);
		}
	if(Novembro == n)
		{
		printf("Novembro - %d dias\n", dias[n-1]);
		}
	if(Dezembro == n)
		{
		printf("Dezembro - %d dias\n", dias[n-1]);
		}
	if((n < 1) || (n > 12))
		{
		puts("Insira um numero valido!");
		}

	return(0);
	}
