#include <stdio.h>
#include <string.h>

int
main()
	{
	char str[100];	
	int bol = 0;
	puts("Escreva uma string");
	fgets(str, 100, stdin);

	int size = strlen(str) - 2;

	for(int i = 0; i < size; i++, size--)
		{
		if(str[i] != str[size])
			{
			bol = 1;
			}
		}

	if(bol == 1)
		{
		puts("Não eh um palindromo");
		}
	else
		{
		puts("Eh um palindromo");
		}

	return 0;
	}
