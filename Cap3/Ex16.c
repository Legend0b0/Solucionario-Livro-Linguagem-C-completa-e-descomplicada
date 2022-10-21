#include <stdio.h>

int
main()
	{
	int n, n1;

	puts("Digite um numero:");
	scanf("%d", &n);

	n1 = n >> 1;
	n = n << 1;

	printf("Multiplicar: %d\n", n);
	printf("Dividir: %d\n", n1);

	return 0;
	}
