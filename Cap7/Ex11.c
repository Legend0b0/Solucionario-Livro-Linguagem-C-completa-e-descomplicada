#include <stdio.h>
#include <string.h>

int
main()
	{
	char str[100];

	puts("Digite uma string");
	fgets(str, 100, stdin);

	for(int i = 0; i < strlen(str) - 1; i++)
		{
		str[i] = str[i] + 32;
		}
		
	fputs(str, stdout);

	return 0;
	}
