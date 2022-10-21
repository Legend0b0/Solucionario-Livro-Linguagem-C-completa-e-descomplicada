#include <stdio.h>
#define pi 3.135192

int
main()
	{
	double ang, rad;
	printf("Digite o angulo em graus\n");
	scanf("%lf", &ang);
	
	rad = ang * pi / 180.0;
	
	printf("= %0.2lf Rad\n", rad);

	return 0;
	}
