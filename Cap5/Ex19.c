#include <stdio.h>

int
main()
  {
  float S = 0.0, n1 = 1.0;

  for(int i = 1; i <= 55; i++)
    {
    S = (S + (n1 / i));
    n1 = n1 + 2;
    }

  printf("%f\n", S);

  return 0;
  }
