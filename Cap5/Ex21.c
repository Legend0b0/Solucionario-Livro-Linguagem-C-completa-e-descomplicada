#include <stdio.h>

int
main()
  {
  int n, n1, maior, cmaior = 0;

  printf("Quantas numeros quer ler\n");
  scanf("%d", &n);

  for(int i = 0; i < n; i++)
    {
    printf("Digite um numero\n");
    scanf("%d", &n1);

    if((i == 0) || (maior < n1))
      {
      maior = n1;
      cmaior = 0;
      }
    if(maior == n1)
      {
      cmaior++;
      }
		}

  printf("Maior = %d - %d vezes\n", maior, cmaior);

  return 0;
  }
