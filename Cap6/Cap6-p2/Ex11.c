#include <stdio.h>

int
main()
	{
	int m[5][5];
	int soma = 0;

	puts("Preencha a matriz");

	for(int i = 0; i < 5; i++)
		{
		for(int j = 0; j < 5; j++)
			{
			scanf("%d", &m[i][j]);
			}
		}

	for(int i = 1; i < 5; i++)
		{
		for(int j = 0; j < 5; j++)
			{
			if(i == j)
				{
				soma += m[i-1][j];
				}
			}
		}

	printf("Soma: %d\n", soma);

	return 0;
	}
