#include <stdio.h>

int
main()
	{	
	char str[100];
	int cont = 0;

	puts("Escreva uma string");
	fgets(str, 100, stdin);

	for(int i = 0; str[i] != '\0'; i++)
		{
		cont++;
		}
	
	printf("%d letras\n", cont - 1);

	return 0;
	}
