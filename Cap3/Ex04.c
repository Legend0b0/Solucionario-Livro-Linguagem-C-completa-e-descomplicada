#include <stdio.h>

int
main()
	{
	float n[4];
	float media = 0;	

	printf("Digite 4 valores\n");

	for(int i = 0; i < 4; i++)
		{
		scanf("%f", &n[i]);
		media += n[i];
		}

	media /= 4;

	printf("Media arietimetrica: %f\n", media);

	return 0;
	}
