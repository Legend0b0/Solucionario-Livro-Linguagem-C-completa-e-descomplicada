#include <stdio.h>

int
main()
  {
  int n;
  double E = 0.0;
  double fa, fu = 1.0;

  do 
    {
    printf("Escreva 1 numero inteiro e positivo\n");
    scanf("%d", &n);
    } while (n < 1);

  for(int i = 1; i <= n; i++)
    {
    for(int j = i; j <= i; j++)
      {
      fa = fu * j;
      fu = fa;
      }
    E += 1.0 / fa;
    }
    
  printf("%lf\n", E);

  return 0;
  }
