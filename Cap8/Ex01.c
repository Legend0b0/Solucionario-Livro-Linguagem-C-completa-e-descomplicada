#include <stdio.h>

struct endereco
	{
	char rua[100];
	int num;
	};

struct cadastro
	{
	char nome[100];
	int idade;
	struct endereco ender;
	};

int
main()
	{
	struct cadastro cad1;
	
	puts("Digite o nome:");
	fgets(cad1.nome, 100, stdin);

	puts("Digite a idade:");
	scanf("%d", &cad1.idade);

	setbuf(stdin, NULL);

	puts("Digite a rua do endereco:");
	fgets(cad1.ender.rua, 100, stdin);

	puts("Digite o numero do endereco:");
	scanf("%d", &cad1.ender.num);

	printf("Nome: %sIdade: %d anos\nRua: %sN: %d\n", cad1.nome, cad1.idade, cad1.ender.rua, cad1.ender.num);

	return 0;
	}
