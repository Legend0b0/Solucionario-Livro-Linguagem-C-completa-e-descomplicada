#include <stdio.h>

int
main()
	{
	char a;
	int b;
	float c;
	
	scanf("%c %d %f", &a, &b, &c);
	
	printf("%c %d %f\n", a, b, c);
	printf("%c\t %d\t %f\t\n", a, b, c);
	printf("%c \n%d \n%f \n", a, b, c);

	return 0;
	}
