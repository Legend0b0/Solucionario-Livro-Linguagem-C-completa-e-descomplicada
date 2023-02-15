#include <stdio.h>
#include <math.h>

struct ponto
	{
	int x;
	int y;
	} p1, p2;

int
main()
	{
	float disR, disD;

	puts("Digite 'x' e 'y' do ponto 1");
	scanf("%d %d", &p1.x, &p1.y);

	puts("Digite os pontos x e y");
	scanf("%d %d", &p2.x, &p2.y);

	disR = ((p2.x - p1.x) + (p2.y - p1.y));
	
	printf("A distancia entre os pontos em retas no eixo 'x' e 'y' e de: %f u.d.\n", disR);

	disD = sqrt(pow((p2.x - p1.x), 2) + (pow((p2.y - p1.y), 2)));

	printf("A distancia entre os pontos com uma reta simples e de: %f u.d.\n", disD);
	
	return 0;
	}
