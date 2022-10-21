#include <stdio.h>

int
main()
	{
	int n1, n2;
	
	puts("Digite dois numeros");
	scanf("%d %d", &n1, &n2);

	printf("Xor: %d\n", n1^n2);
	printf("Or bit a bit: %d\n", n1|n2);
	printf("And bit a bit: %d\n", n1&n2);

	return 0;
	}
