#include <stdio.h>

int
main()
	{
	char c;
	
	printf("Digite uma letra maiuscula\n");
	scanf("%c", &c);
	
	c += 32;

	printf("%c\n", c);

	return 0;
	}
