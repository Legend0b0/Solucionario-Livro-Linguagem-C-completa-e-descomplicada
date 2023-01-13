#include <stdio.h>
#include <string.h>

int
main()
	{
	char S[100];
	int i, j;

	puts("Digite para a string 'S'");
	fgets(S, 100, stdin);

	puts("Digite os valores para 'i' e 'j'");
	scanf("%d %d", &i, &j);

	if(i > j)
		{
		int aux = i;
		i = j;
		j = aux;
		}

	if(j < strlen(S))
		{
		for(; i <= j; i++)
			{
			printf("%c", S[i]);
			}
		}
	
	printf("\n");

	return 0;
	}
