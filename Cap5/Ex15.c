#include <stdio.h>

int
main()
  {
  int n;

  printf("Digite 1 numero\n");
  scanf("%d", &n);

  int maior = n, menor = n;
    if(maior < n)
      {
      maior = n;
      }
    if((menor > n) && (n >= 0))
      {
      menor = n;
      }

  while (n >= 0)
    {
    printf("Digite 1 numero\n");
    scanf("%d", &n);
      if(maior < n)
        {
        maior = n;
        }
      if((menor > n) && (n >= 0))
        {
        menor = n;
        }
    }

    printf("Menor -> %d\n", menor);
    printf("Maior -> %d\n", maior);

  return 0;
  }
