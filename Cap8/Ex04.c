#include <stdio.h>
#include <math.h>

struct ponto
	{
	int x;
	int y;
	};

struct Retangulo
	{
	struct ponto PsE;
	struct ponto PiD;
	} r;

int
main()
	{
	int l, h;
	int area, perim;
	float diag;

	puts("Digite o ponto superior esquerdo");
	scanf("%d %d", &r.PsE.x, &r.PsE.y);

	puts("Digite o ponto inferior direito");
	scanf("%d %d", &r.PiD.x, &r.PiD.y);

	l = r.PiD.x - r.PsE.x;
	h = r.PiD.y - r.PsE.y;

	area = l * h;
	diag = sqrt((pow(l, 2)) + (pow(h, 2)));
	perim = ((2 * l) + (2 * h));

	printf("Area: %d\nDiagonal: %f\nPerimetro: %d\n", area, diag, perim);

	return 0;
	}
