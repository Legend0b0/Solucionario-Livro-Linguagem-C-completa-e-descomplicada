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

	puts("Digite o ponto superior esquerdo do retangulo");
	scanf("%d %d", &r.PsE.x, &r.PsE.y);

	puts("Digite o ponto inferior direito do retangulo");
	scanf("%d %d", &r.PiD.x, &r.PiD.y);

	struct ponto p;

	puts("Digite o ponto");
	scanf("%d %d", &p.x, &p.y);

	if(((r.PsE.x <= p.x) && (r.PiD.x >= p.x)) && ((r.PsE.y <= p.y) && (r.PiD.y >= p.y)))
		{
		puts("Esta dentro do retangulo");
		}
	else
		{
		puts("Nao esta dentro do retangulo");
		}
	
	return 0;
	}
