#include <stdio.h>
#define heran 780000.00

int
main()
	{
	float porc = heran / 100;

	printf("Primeiro ganhador: %0.2f reais\n", porc*46);
	printf("Segundo ganhador: %0.2f reais\n", porc*32);
	printf("Terceiro ganhador: %0.2f reias\n", porc*((100 - 46) - 32));

	return 0;
	}
