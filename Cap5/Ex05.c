#include <stdio.h>

int
main()
  {
  int n = 0, p = 0;

  for(int i = 0; i <= 50; i++)
    {
    n = n + 2;
    p = n + p;
    }
  printf("%d\n", p);

  return 0;
  }
