#include <stdio.h>
#include <string.h>

int
main()
	{
	char str[100];
	char carac;
	int count = 0;

	puts("Escreva uma string");
	fgets(str, 100, stdin);

	puts("Digite uma letra para trocar pelas vogais");
	carac = getchar();

	for(int i = strlen(str); i >= 0; i--)
		{
		if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') 
			{
			str[i] = carac;
			count++;	
			}
		}

	fputs(str, stdout);

	printf("%d vogais\n", count);

	return 0;
	}
