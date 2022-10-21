#include <stdio.h>
#include <math.h>

int
main()
  {
  float a, b, c, D, r1, r2;

  printf("Digite os numeros correspondentes a 'a', 'b' e 'c' da funcao\n");
  scanf("%f %f %f", &a, &b, &c);

  if (a != 0)
    {
    D = ((pow(b, 2)) - (4 * a * c));
    if (D < 0)
      {
      printf("Nao existe raiz\n");
      }
    if (D == 0)
      {
      r1 = (((-1 * b) + (sqrt(D))) / ((2 * a)));
      printf("Raiz unica: %0.1f\n", r1);
      }
    if (D > 0)
      {
      r1 = (((-1 * b) + (sqrt(D))) / ((2 * a)));
      r2 = (((-1 * b) - (sqrt(D))) / ((2 * a)));
      printf("Duas raizes: %0.1f, %0.1f\n", r1, r2);
      }
    }
  else
    {
    printf("Nao e equacao de segundo gra\n");
    }

  return(0);
  }
