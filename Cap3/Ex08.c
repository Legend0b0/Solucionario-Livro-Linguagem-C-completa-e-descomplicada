#include <stdio.h>

int
main()
	{
	float temp;

	printf("Digite a temperatura em graus Celsius\n");
	scanf("%f", &temp);

	temp = ((temp * (9.0/5.0)) + 32.0);

	printf("%0.2f F\n", temp);

	return 0;
	}
