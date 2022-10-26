#include <stdio.h>

int
main()
	{
	int m[3][3];
	int soma = 0;
	
	puts("Preencha a matriz");

	for(int i = 0; i < 3; i++)
		{
		for(int j = 0; j < 3; j++)
			{
			scanf("%d", &m[i][j]);
			
			if(i == j)
				{
				soma += m[i][j];
				}
			}
		}

	printf("Soma: %d\n", soma);	

	return 0;
	}
