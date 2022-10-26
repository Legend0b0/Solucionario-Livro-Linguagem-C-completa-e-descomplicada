#include <stdio.h>
#include <math.h>

int
main()
	{
	int A[5][5];
	int B[5][5];

	puts("Preencha a matriz");

	for(int i = 0; i < 5; i++)
		{
		for(int j = 0; j < 5; j++)
			{
			scanf("%d", &A[i][j]);

			B[i][j] = pow(A[i][j], 2);
			}
		}

	for(int i = 0; i < 5; i++)
		{
		for(int j = 0; j < 5; j++)
			{
			printf("%d\t", B[i][j]);
			}
		printf("\n");
		}

	return 0;
	}
