#include <stdio.h>
#include <stdbool.h>

bool ehBissexto(int ano)
	{
	return (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0));
	}

struct __data
	{
	int dia;
	int mes;
	int ano;
	} data1, data2;

int
main()
	{
	int countdias = 0;
	int diasdomes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	puts("Entre com a data 1");
	scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

	puts("Entre com a data 2");
	scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

	for(int i = data1.ano; i < data2.ano; i++)
		{
		if(ehBissexto(i))
			{
			countdias += 366;
			}
		else
			{
			countdias += 365;
			}
		}

	if(data1.mes < data2.mes)
		{
		for(int i = data1.mes; i < data2.mes; i++)
			{
			countdias += diasdomes[i-1];
			if((i == 1) && (ehBissexto(data2.ano)))
				{
				countdias++;
				}
			}
		}
	else
		{
		for(int i = data2.mes; i < data1.mes; i++)
			{
			countdias -= diasdomes[i-1];
			}
		}

	if(data1.dia < data2.dia)
		{
		countdias += data2.dia - data1.dia;
		}
	else
		{
		countdias += data1.dia - data2.dia;
		}

	printf("%d dias\n", countdias);

	return(0);
	}
