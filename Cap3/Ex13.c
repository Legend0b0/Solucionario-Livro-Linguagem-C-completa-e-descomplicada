#include <stdio.h>
#include <math.h>

int
main()
	{
	float c1, c2, h;

	printf("Digite o valor dos catetos\n");
	scanf("%f %f", &c1, &c2);

	h = sqrt((pow(c1,2) + pow(c2,2)));

	printf("A hipotenusa vale: %0.1f \n", h);

	return 0;
	}
