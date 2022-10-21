#include <stdio.h>

int
main()
	{
	float v;
	
	printf("Digite uma velocidade em km/h:\n");
	scanf("%f", &v);

	v /= 3.6;

	printf("%0.2f m/s\n", v);

	return 0;
	}
