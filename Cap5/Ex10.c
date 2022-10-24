#include <stdio.h>

int
main()
  {
  int n[10];
  float soma = 0;

  printf("Digite 10 numeros\n");

  for(int i = 0; i < 10;)
    {
    scanf("%d", &n[i]);

    if (n[i] >= 0)
      {
      soma = soma + n[i];
      i++;
      }
    else
      {
      printf("Tem que ser positivo\n");
      }
    }
  soma = (soma / 10);

  printf("A media eh %0.1f\n", soma);

  return 0;
  }
