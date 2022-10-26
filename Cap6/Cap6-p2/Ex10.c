#include <stdio.h>

int
main()
	{
	int m[10][3];
	int cont[3];

	puts("Preencha com as notas");

	for(int i = 0; i < 10; i++)
		{
		for(int j = 0; j < 3; j++)
			{
			scanf("%d", &m[i][j]);
			
			cont[j] = 0;
			}
		}

	for(int i = 0; i < 10; i++)
		{
		if((m[i][0] < m[i][1]) && (m[i][0] < m[i][2]))
			{
			cont[0]++;
			}
		if((m[i][1] < m[i][0]) && (m[i][1] < m[i][2]))
			{
			cont[1]++;
			}
		if((m[i][2] < m[i][0]) && (m[i][2] < m[i][1]))
			{
			cont[2]++;
			}
		}

	for(int i = 0; i < 3; i++)
		{
		printf("P%d: %d alunos\n", i+1, cont[i]);
		}

	return 0;
	}
