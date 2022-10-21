#include <stdio.h>

int
main()
  {
  int n;

  printf("Escreva um numero\n");
  scanf("%d", &n);

  if ((n % 2) == 0)
    {
    printf("O numero e par\n");
    }
  else
    {
    printf("o numero e impar\n");
    }

  return(0);
  }
