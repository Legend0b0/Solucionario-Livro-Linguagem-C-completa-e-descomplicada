#include <stdio.h>

int
main()
  {
  int n, imp = 1;

  printf("Escreva um numero\n");
  scanf("%d", &n);

  for(int i = 0; i < n; i++)
    {
    printf("%d\n", imp);
    imp = imp + 2;
    }

  return 0;
  }
