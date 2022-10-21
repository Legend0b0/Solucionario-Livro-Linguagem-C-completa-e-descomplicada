#include <stdio.h>

int
main()
	{
	int n1, n2, n3, soma;
	
	printf("Digite 3 numeros\n");
	scanf("%d %d %d", &n1, &n2, &n3);

	soma = n1 + n2 + n3;

	printf("Soma: %d\n", soma);

	return 0;
	}
