#include <stdio.h>

int
main()
  {
  int n, d1, d2;

  printf("Digite um numero:\n");
  scanf("%d", &n);

  d1 = n % 3;
  d2 = n % 5;

  if ((d1 == 0) && (d2 != 0))
    {
    printf("Divizivel por 3\n");
    }
  if ((d1 != 0) && (d2 == 0))
    {
    printf("Divizivel por 5\n");
    }

  return(0);
  }
