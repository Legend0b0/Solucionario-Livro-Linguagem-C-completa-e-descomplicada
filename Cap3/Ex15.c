#include <stdio.h>

int
main()
	{
  int nL, nG, aux, aux2;

	puts("Digite um numero com 3 algarismos");
  scanf("%d", &nL);
  
	aux2 = nL;
  nG = aux2 % 10;
	aux = nG * 100;  

	aux2 /= 10;
	nG = aux2 % 10;
	aux = aux + (nG * 10);

	aux2 /= 10;
	nG = aux + aux2;

  printf("Numero lido: %d\n", nL);
  printf("Numero gerado: %d\n", nG);

	return 0;
	}
