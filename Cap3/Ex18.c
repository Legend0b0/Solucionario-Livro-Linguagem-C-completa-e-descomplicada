#include <stdio.h>

int
main()
	{
	int n1, n2, esq, dir;

	puts("Digite 2 numeros");
	scanf("%d %d", &n1, &n2);

	esq = n1 << n2;
	dir = n1 >> n2;
	
	printf("Esquerda: %d\n", esq);
	printf("Direita: %d\n", dir);

	return 0;
	}
