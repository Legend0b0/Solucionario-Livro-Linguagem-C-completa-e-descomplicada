#include <stdio.h>
#include <math.h>

struct ponto
	{
	int x;
	int y;
	};

int
main()
	{
	float disR, disD;
	struct ponto p0 = {0,0};
	struct ponto p1;

	puts("Digite os pontos x e y");
	scanf("%d %d", &p1.x, &p1.y);

	disR = ((p1.x - p0.x) + (p1.y - p0.y));
	
	printf("A distancia ate o ponto zero em retas no eixo 'x' e 'y' e de: %f u.d.\n", disR);

	disD = sqrt(pow((p1.x - p0.x), 2) + (pow((p1.y - p0.y), 2)));

	printf("A distancia ate o ponto zero em uma reta simples e de: %f u.d.\n", disD);
	
	return 0;
	}
