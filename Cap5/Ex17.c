#include <stdio.h>

int
main()
  {
  int l, n = 1;

  printf("Digite 1 numero\n");
  scanf("%d", &l);

  for(int i = 1; i <= l; i++)
    {
    for(int j = 1; j <= i; j++)
      {
      printf("%d ", n);
      n++;
      }
    printf("\n");
    }

  return 0;
  }
