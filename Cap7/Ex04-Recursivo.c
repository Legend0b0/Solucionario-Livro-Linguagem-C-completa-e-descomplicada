#include <stdio.h>

void 
rec(char str[], int cont)
{
	if(str[cont] == '\0')
  {
  	return;
	}
  rec(str, cont + 1);

	printf("%c", str[cont]);
}

int 
main()
{
	char str[100];

	puts("Escreva uma string");
	scanf("%s", str);

	rec(str, 0);

	printf("\n");

	return 0;
}
