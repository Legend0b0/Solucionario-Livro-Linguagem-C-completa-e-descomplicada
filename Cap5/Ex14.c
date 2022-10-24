#include <stdio.h>

int
main()
  {
  long long unsigned int n, soma1 = 0, soma2 = 1, soma3;

  printf("Digite 1 numero\n");
  scanf("%lld", &n);

  printf("%lld\n", soma1);
  printf("%lld\n", soma2);

  for(int i = 1; i <= n; i++)
    {
    soma3 = soma2 + soma1;
    soma1 = soma2;
    soma2 = soma3;
    printf("%lld\n", soma3);
    }

  return 0;
  }
