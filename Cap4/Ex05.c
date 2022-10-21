#include <stdio.h>
#include <math.h>

int
main()
  {
  float n;
  double q, r;

  printf("Digite um numero\n");
  scanf("%f", &n);
  
  if (n > 0)
    {
    r = sqrt(n);
    q = pow(n,2);
    
    printf("O quadrado do numero e: %f\n", q);
    printf("A raiz do numero é: %f\n", r);
    }

  return(0);
  } 
