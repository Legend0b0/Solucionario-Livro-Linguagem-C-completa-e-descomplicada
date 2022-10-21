#include <stdio.h>

int
main()
  {
  float h, p;
  char s;

  printf("Digite 'm' para masc e 'f' para femi:\n");
  scanf("%c", &s);

  printf("Digite sua altura em M:\n");
  scanf("%f", &h);

  if (s == 'm')
    {
    p = (72.7 * h) - 58;
    printf("Seu peso ideal e: %f\n", p);
    }
  if (s == 'f')
    {
    p = (62.1 * h) - 44.7;
    printf("Seu peso ideal e: %f\n", p );
    }

  return(0);
  }
