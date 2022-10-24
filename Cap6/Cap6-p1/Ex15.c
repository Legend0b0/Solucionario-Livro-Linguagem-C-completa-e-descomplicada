#include <stdio.h>

int
main()
	{
	int menorp;
	float v[10], aux, menor;

	for(int i = 0; i < 10; i++)
		{
		printf("Preencha o vetor:\n");
		scanf("%f", &v[i]);
		}

	for(int i = 0; i < 10; i++)
		{
		menor = v[i];
		menorp = i;

		for(int j = i; j < 10; j++)
			{
			if(menor > v[j])
				{
				menor = v[j];
				menorp = j;
				}
			}

		aux = v[menorp];
		v[menorp] = v[i];
		v[i] = aux;

		}

	for(int i = 0; i < 10; i++)
		{
		printf("%0.1f ", v[i]);
		}
	printf("\n");

	return 0;
	}
