#include <stdio.h>

int
main()
	{
	int m[4][4];
	int maior;
	int maiorI, maiorJ;

	printf("Preencha a matriz\n");

	for(int i = 0; i < 4; i++)
		{
		for(int j = 0; j < 4; j++)
			{
			scanf("%d", &m[i][j]);

			if(((j == 0) && (i == 0)) || (maior < m[i][j]))
				{
				maior = m[i][j];
				maiorI = i;
				maiorJ = j;
				}
			}
		}
		
	printf("Maior: %d [%d][%d]\n", m[maiorI][maiorJ], maiorI, maiorJ);

	return 0;
	}
