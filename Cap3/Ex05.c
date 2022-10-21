#include <stdio.h>

int 
main()
	{
	int idade;
	int ano, anoN;

	printf("Digite sua idade\n");
	scanf("%d", &idade);
	printf("Digite o ano atual\n");	
	scanf("%d", &ano);
	
	anoN = ano - idade;

	printf("Ano de nascimento: %d\n", anoN);

  return 0;
	}
