#include <stdio.h>

int
main()
	{
	int m[4][4];
	int cont = 0;

	puts("Preencha a matriz");

	for(int i = 0; i < 4; i++)
		{
		for(int j = 0; j < 4; j++)
			{
			scanf("%d", &m[i][j]);

			if(m[i][j] > 10)
				{
				cont++;
				}
			}
		}

	printf("%d valores maiores que 10\n", cont);

	return 0;
	}
