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

  printf("%d\n", soma);

  return 0;
  }
