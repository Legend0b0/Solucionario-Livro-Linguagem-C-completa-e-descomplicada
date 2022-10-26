#include <stdio.h>

int
main()
	{
	int m[3][3];
	int v[3];
	
	for(int i = 0; i < 3; i++)
		{
		v[i] = 0;
		}

	puts("Preencha a matriz");

	for(int i = 0; i < 3; i++)
		{
		for(int j = 0; j < 3; j++)
			{
			scanf("%d", &m[i][j]);
			
			v[j] += m[i][j];
			}
		}

	for(int i = 0; i < 3; i++)
		{
		printf("%d\t", v[i]);
		}
	printf("\n");

	return 0;
	}
