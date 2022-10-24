#include <stdio.h>

int
main()
  {
  int n, soma = 0;

  printf("Digite 1 numero\n");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++)
    {
    if ((n % i) == 0)
      {
      soma = soma + i;
      }
    }

  printf("%d\n", soma);

  return 0;
  }
