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
	struct atletas atleta[6];
	
	for(int i = 0; i < 6; i++)
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

	struct atletas MVelho[6];
	struct atletas MAlto[6];
	int countV = 0;
	int countA = 0;

	MVelho[0] = atleta[0];
	MAlto[0] = atleta[0];

	for(int i = 1; i < 6; i++)
		{
		if(atleta[i].idade >= MVelho[countV].idade)
			{
			if(atleta[i].idade == MVelho[countV].idade)
				{
				countV++;
				}
			else
				{
				countV = 0;
				}
			MVelho[countV] = atleta[i];
			}
		}

	for(int i = 1; i < 6; i++)
		{
		if(atleta[i].altura >= MAlto[countA].altura)
			{
			if(atleta[i].altura == MAlto[countA].altura)
				{
				countA++;
				}
			else
				{
				countA = 0;
				}
			MAlto[countA] = atleta[i];
			}
		}

	puts("Mais Velho:");
	for(int i = 0; i <= countV; i++)
		{
		printf("Nome: %s\nEsporte: %s\nIdade: %d\tAltura: %0.2f\n\n", MVelho[i].nome, MVelho[i].esporte, MVelho[i].idade, MVelho[i].altura);
		}

	puts("Mais Alto:");
	for(int i = 0; i <= countA; i++)
		{
		printf("Nome: %s\nEsporte: %s\nIdade: %d\tAltura: %0.2f\n\n", MAlto[i].nome, MAlto[i].esporte, MAlto[i].idade, MAlto[i].altura);
		}

	return 0;
	}

