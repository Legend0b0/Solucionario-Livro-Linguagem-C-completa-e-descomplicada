#include <stdio.h>

int
main()
  {
  int v[100];
  int n = 1;

  for(int i = 0; i < 100; i++)
    {
    while ((n % 7) == 0.0)
      {
      n++;
      }
    v[i] = n;
    n++;
    }

  for(int i = 0; i < 100; i++)
    {
    printf("%d\n", v[i]);
    }

  return 0;
  }
