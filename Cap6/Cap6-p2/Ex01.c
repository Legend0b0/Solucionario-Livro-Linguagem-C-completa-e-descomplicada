#include <stdio.h>

int
main()
	{
	int m[3][3], menor;
	
	printf("Preencha a matriz\n");

	for(int i = 0; i < 3; i++)
		{
		for(int j = 0; j < 3; j++)
			{
			scanf("%d", &m[i][j]);
			
			if((i == 0) || (menor > m[i][j]))
				{
				menor = m[i][j];
				}
			}
		}
	
	printf("Menor: %d\n", menor);

	return 0;
	}
