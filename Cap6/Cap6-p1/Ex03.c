#include <stdio.h>

int
main()
  {
  int v[5];
  float soma = 0;

  for(int i = 0; i < 5; i++)
    {
    printf("Escreva um numero\n");
    scanf("%d", &v[i]);
    
		soma = soma + v[i];
    }
  soma = soma/5.0;

  for(int i = 0; i < 5; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");
  
	printf("Media: %0.1f\n", soma);

  return 0;
  }
