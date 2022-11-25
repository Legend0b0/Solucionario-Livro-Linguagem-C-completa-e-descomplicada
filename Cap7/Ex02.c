#include <stdio.h>

int
main()
	{
	char str[100];

	puts("Escreva uma string");
	fgets(str, 100, stdin);

	for(int i = 0; i < 4; i++)
		{
		printf("%c", str[i]);
		}
	printf("\n");

	return 0;
	}
