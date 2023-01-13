#include <stdio.h>

int
main()
	{
	char nome[100];
	float valorP, valorAV;

	puts("Digite o nome do produto");
	fgets(nome, 100, stdin);
	
	puts("Digite o preco");
	scanf("%f", & valorP);

	valorAV = ((valorP / 100.0) * 90.0);

	printf("A venda: %sPor %.2f reais\nA vista com %.2f reais de desconto, saindo por %.2f reais!\n", nome, valorP, (valorP - valorAV), valorAV);

	return 0;
	}
