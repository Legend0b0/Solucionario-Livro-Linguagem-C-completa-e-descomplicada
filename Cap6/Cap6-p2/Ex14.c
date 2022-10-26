#include <stdio.h>

int
main()
	{
	int m[5][5];
	int somand = 0;
	int somapd = 0;

	puts("Preencha a matriz");

	for(int i = 0; i < 5; i++)
		{
		for(int j = 0; j < 5; j++)
			{
			scanf("%d", &m[i][j]);
	
			if((i != j) && ((i + j) != 4))
				{
				somand += m[i][j];
				}
			else
				{
				somapd += m[i][j];
				}
			}
		}

	printf("Soma pertencentes as diagonais: %d\n", somapd);
	printf("Soma nao pertencentes as diagonais: %d\n", somand);
	
	return 0;
	}
