#include <stdio.h>
#include <string.h>

int
main()
	{
	char str[100];
	char aux;

	puts("Digite uma string");
	fgets(str, 100, stdin);	
	
	int n = strlen(str) - 2;	

	for(int i = 0; i < n; i++, n--)
		{
		aux = str[n];
		str[n] = str[i];
		str[i] = aux;
		}

	fputs(str, stdout);

	return 0;
	}
