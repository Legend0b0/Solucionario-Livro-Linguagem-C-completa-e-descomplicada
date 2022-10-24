#include <stdio.h>

int
main()
  {
  int n[10];
	int soma = 0;

  printf("Digite 10 numeros\n");

  for(int i = 0; i < 10; i++)
    {
    scanf("%d", &n[i]);
    soma = soma + n[i];
    }
  soma = (soma / 10);

  printf("A media e: %d\n", soma);

  return 0;
  }
