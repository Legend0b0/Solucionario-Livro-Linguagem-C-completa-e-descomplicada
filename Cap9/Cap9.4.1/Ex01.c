#include <stdio.h>

int maior(int x1, int x2)
  {
  if(x1 > x2)
    {
    return(x1);
    }
  if(x2 > x1)
    {
    return(x2);
    }
  return(-1);
  }

int
main()
  {
  int x1, x2;

  puts("Entre com 2 numeros");
  scanf("%d %d", &x1, &x2);

  printf("Maior: %d\n", maior(x1, x2));

  return(0);
  }
