#include <stdio.h>

int
main()
	{
	float n;

	printf("Digite um numero\n");
	scanf("%f", &n);

	n /= 5;

	printf("Quinta parte: %f\n", n);

	return 0;
	}
