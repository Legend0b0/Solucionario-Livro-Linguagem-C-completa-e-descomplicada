#include <stdio.h>

int
main()
  {
  int n;
  float h;

  printf("Digite 1 numero\n");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++)
    {
    h = (h + (1.0 / i));
    }

  printf("Hn = %f\n", h);

  return 0;
  }
