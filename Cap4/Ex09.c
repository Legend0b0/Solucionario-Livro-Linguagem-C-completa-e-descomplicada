#include <stdio.h>

int
main()
  {
  float a, p;

  printf("Digite a altura em M:\n");
  scanf("%f", &a);
  printf("Digite o peso:\n");
  scanf("%f", &p);

  if (p <= 60)
    {
    if (a < 1.2)
      {
      printf("Categoria A\n");
      }
    if ((a >= 1.2) && (a <= 1.7))
      {
      printf("Categoria B\n");
      }
    if (a > 1.7)
      {
      printf("Categoria C\n");
      }
    }
  if ((p > 60) && (p <= 90))
    {
    if (a < 1.2)
      {
      printf("Categoria D\n");
      }
    if ((a >= 1.2) && (a <= 1.7))
      {
      printf("Categoria E\n");
      }
    if (a > 1.7)
      {
      printf("Categoria F\n");
      }
    }
  if (p > 90)
    {
    if (a < 1.2)
      {
      printf("Categoria G\n");
      }
    if ((a >= 1.2) && (a <= 1.7))
      {
      printf("Categoria H\n");
      }
    if (a > 1.7)
      {
      printf("Categoria I\n");
      }
    }

  return(0);
  }
