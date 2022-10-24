#include <stdio.h>

int
main()
  {
  float v[10];
  int n = 0, soma = 0;

  for(int i = 0; i < 10; i++)
    {
    printf("Digite um numero\n");
    scanf("%f", &v[i]);

    if (v[i] < 0)
      {
      n++;
      }
    if(v[i] > 0)
      {
      soma += v[i];
      }
    }

  printf("%d numeros negativos\n", n);
  printf("Soma dos positivos: %d\n", soma);

  return 0;
  }
