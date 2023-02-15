#include <stdio.h>

enum semana {Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado} s1;

int
main()
	{
	int n;
	
	puts("Entre com um numero de 1 a 7:");
	scanf("%d", &n);

	if(Domingo == n)
		{
		puts("Domingo");
		}
		if(Segunda == n)
		{
		puts("Segunda");
		}
	if(Terca == n)
		{
		puts("Terca");
		}
	if(Quarta == n)
		{
		puts("Quarta");
		}
	if(Quinta == n)
		{
		puts("Quinta");
		}
	if(Sexta == n)
		{
		puts("Sexta");
		}
	if(Sabado == n)
		{
		puts("Sabado");
		}
	if((n < 1) || (n > 7))
		{
		puts("Insira um numero valido!");
		}

	return(0);
	}
