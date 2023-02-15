#include <stdio.h>

struct nascimento
	{	
	int d, m, a;
	};

struct dados
	{
	char nome[100];
	struct nascimento nasc;
	};

int
main()
	{
	struct dados pessoa[6];

	for(int i = 0; i < 6; i++)
		{
		puts("Digite o nome");
		gets(pessoa[i].nome);
		setbuf(stdin, NULL);

		puts("Digite a data de nascimento");
		scanf("%d %d %d", &pessoa[i].nasc.d, &pessoa[i].nasc.m, &pessoa[i].nasc.a);
		setbuf(stdin, NULL);
		}

	struct dados MVelha[6];
	struct dados MNova[6];
	int countV = 0;
	int countN = 0;

	MVelha[0] = pessoa[0];
	MNova[0] = pessoa[0];

	for(int i = 1; i < 6; i++)
		{
		if(pessoa[i].nasc.a <= MVelha[countV].nasc.a)
			{
			if(pessoa[i].nasc.a == MVelha[countV].nasc.a)
				{
				if(pessoa[i].nasc.m <= MVelha[countV].nasc.m)
					{
					if(pessoa[i].nasc.m == MVelha[countV].nasc.m)
						{
						if(pessoa[i].nasc.d <= MVelha[countV].nasc.d)
							{
							if(pessoa[i].nasc.d == MVelha[countV].nasc.d)
								{
								countV++;
								MVelha[countV] = pessoa[i];
								}
							else
								{
								countV = 0;
								MVelha[countV] = pessoa[i];
								}
							}
						}
					else
						{
						countV = 0;
						MVelha[countV] = pessoa[i];
						}
					}
				}
			else
				{
				countV = 0;
				MVelha[countV] = pessoa[i];
				}
			}
		}

	for(int i = 1; i < 6; i++)
		{
		if(pessoa[i].nasc.a >= MNova[countN].nasc.a)
			{
			if(pessoa[i].nasc.a == MNova[countN].nasc.a)
				{
				if(pessoa[i].nasc.m >= MNova[countN].nasc.m)
					{
					if(pessoa[i].nasc.m == MNova[countN].nasc.m)
						{
						if(pessoa[i].nasc.d >= MNova[countN].nasc.d)
							{
							if(pessoa[i].nasc.d == MNova[countN].nasc.d)
								{
								countN++;
								MNova[countN] = pessoa[i];
								}
							else
								{
								countN = 0;
								MNova[countN] = pessoa[i];
								}
							}
						}
					else
						{
						countN = 0;
						MNova[countN] = pessoa[i];
						}
					}
				}
			else
				{
				countN = 0;
				MNova[countN] = pessoa[i];
				}
			}
		}

	puts("Mais novo:");
	for(int i = 0; i <= countN; i++)
		{
		printf("%s\t%d/%d/%d\n", MNova[i].nome, MNova[i].nasc.d, MNova[i].nasc.m, MNova[i].nasc.a);
		}
		
	puts("Mais velho:");
	for(int i = 0; i <= countV; i++)
		{
		printf("%s\t%d/%d/%d\n", MVelha[i].nome, MVelha[i].nasc.d, MVelha[i].nasc.m, MVelha[i].nasc.a);
		}

	return 0;
	}
