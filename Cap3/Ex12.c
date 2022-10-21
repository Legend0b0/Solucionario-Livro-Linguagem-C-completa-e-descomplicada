#include <stdio.h>
#define pi 3.141592

int
main()
	{
	float a, r, h;

	printf("Digite o raio\n");
	scanf("%f", &r);
	printf("Digite a altura\n");
	scanf("%f", &h);

	a = pi * r * r * h;

	printf("Area: %0.2f\n", a); 

	return 0;
	}
