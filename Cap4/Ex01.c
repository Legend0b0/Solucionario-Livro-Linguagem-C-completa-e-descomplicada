#include <stdio.h>

int
main()
  {
  int a, b;

  printf("Digite dois numeros:\n");
  scanf("%d %d", &a, &b);

  if (a > b)
    {
    printf("O maior e: %d\n", a);
    }
  else
    {
    printf("O maior e: %d\n", b);
    }

  return(0);
  }
