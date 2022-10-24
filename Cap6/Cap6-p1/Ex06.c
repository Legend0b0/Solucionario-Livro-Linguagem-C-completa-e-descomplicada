#include <stdio.h>

int
main()
  {
  int v[10];
  float rest;
  int cont = 0;

  for(int i = 0; i < 10; i++)
    {
    printf("Digite um numero\n");
    scanf("%d", &v[i]);
    }

  for(int i = 0; i < 10; i++)
    {
    rest = v[i] % 2;
    if (rest == 0)
      {
      cont++;
      }
    }

  printf("%d numeros pares\n", cont);

  return 0;
  }
