#include <stdio.h>

struct Alunos
	{
	int matric;
	char nome[100];
	float prova[3];
	};

int
main()
	{
	float media[5];
	int maiorM = 0;
	struct Alunos aluno[5];

	for(int i = 0; i < 5; i++)
		{
		printf("Digite o numero de matricula do aluno %d\n", i+1);
		scanf("%d", &aluno[i].matric);

		setbuf(stdin, NULL);

		printf("Digite o nome do aluno %d\n", i+1);
		fgets(aluno[i].nome, 100, stdin);

		setbuf(stdin, NULL);
		
		media[i] = 0;

		for(int j = 0; j < 3; j++)
			{
			printf("Digite a nota da prova %d do aluno %d\n", j+1, i+1);
			scanf("%f", &aluno[i].prova[j]);

			media[i] += aluno[i].prova[j];
			}

		setbuf(stdin, NULL);

		media[i] /= 3;
		}

	for(int i = 0; i < 5; i++)
		{
		if(media[i] > maiorM)
			{
			maiorM = i;
			} 
		}

		printf("Maiores notas:\nNome: %s", aluno[maiorM].nome);

		for(int i = 0; i < 3; i++)
			{
			printf("Prova %d: %f0.2\n", i+1, aluno[maiorM].prova[i]);
			}


	return 0;
	}
