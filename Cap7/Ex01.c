#include <stdio.h>

int
main()
	{
	char str[100];

	puts("Escreva uma string");
	fgets(str, 100, stdin);

	fputs(str, stdout);	

	return 0;
	}
