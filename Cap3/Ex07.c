#include <stdio.h>

int
main()
	{
	float r, c;

	printf("Digite a quantia em reais\n");
	scanf("%f", &r);
	printf("Digite a cotacao do dolar\n");
	scanf("%f", &c);

	r /= c;
	
	printf("%0.2f dolares\n", r);

	return 0;
	}
