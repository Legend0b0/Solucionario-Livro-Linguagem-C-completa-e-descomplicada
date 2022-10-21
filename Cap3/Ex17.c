#include <stdio.h>

int
main()
	{
	int n, n1;
	
	puts("Digite um numero:");
	scanf("%d", &n);

	n1 = ~n;

	printf("Numero Lido: %d\n", n);
	printf("Complemento: %d\n", n1);

	return 0;
	}
