#include <stdio.h>

struct tempo
	{
	int h;
	int	m;
	int s;
	};

int
main()
	{
	struct tempo hora[5];

	for(int i = 0; i < 5; i++)
		{
		puts("Digite as horas, minutos e segundos");
		scanf("%d %d %d", &hora[i].h, &hora[i].m, &hora[i].s);
		}

	struct tempo maiorH = hora[0];

	for(int i = 1; i < 5; i++)
		{
		if(maiorH.h <= hora[i].h)
			{
			if(maiorH.h == hora[i].h)
				{
				if(maiorH.m <= hora[i].m)
					{
					if(maiorH.m == hora[i].m)
						{
						if(maiorH.s <= hora[i].s)
							{
							if(maiorH.s == hora[i].s)
								{
								maiorH = hora[i];
								}
							}
						}
					else
						{
						maiorH = hora[i];
						}
					}
				}
			else
				{
				maiorH = hora[i];
				}
			}
		}
	
	printf("Maior hora: %d:%d:%d\n", maiorH.h, maiorH.m, maiorH.s);

	return 0;
	}
