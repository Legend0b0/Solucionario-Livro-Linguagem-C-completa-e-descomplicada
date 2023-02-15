#include <stdio.h>

struct atletas
	{
	char nome[100];
	char esporte[50];
	int idade;
	float altura;
	};

int
main()
	{
	struct atletas atleta[5];
	struct atletas temp;
	
	for(int i = 0; i < 5; i++)
		{
		puts("Nome do atleta:");
		gets(atleta[i].nome);
		setbuf(stdin, NULL);

		puts("Esporte praticado:");
		gets(atleta[i].esporte);
		setbuf(stdin, NULL);

		puts("Idade do atleta:");
		scanf("%d", &atleta[i].idade);
		setbuf(stdin, NULL);

		puts("Altura do atleta:");
		scanf("%f", &atleta[i].altura);
		setbuf(stdin, NULL);
		}

	for(int i = 0; i < 5; i++)
		{
		for(int j = 0; j < 4; j++)
			{
			if(atleta[j].idade < atleta[j+1].idade)
				{
				temp = atleta[j+1];
				atleta[j+1] = atleta[j];
				atleta[j] = temp;
				}
			}
		}

	puts("Mais Velho ao mais Novo:");
	for(int i = 0; i < 5; i++)
		{
		printf("Nome: %s\nEsporte: %s\nIdade: %d\tAltura: %0.2f\n\n", atleta[i].nome, atleta[i].esporte, atleta[i].idade, atleta[i].altura);
		}

	return 0;
	}
