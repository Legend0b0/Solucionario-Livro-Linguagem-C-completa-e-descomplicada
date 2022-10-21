#include <stdio.h>
#define pi 3.141592

int
main()
	{
	float a, r;
	printf("Digite o raio\n");
	scanf("%f", &r);

	a = pi * r * r;

	printf("Area: %0.2f\n", a); 

	return 0;
	}
