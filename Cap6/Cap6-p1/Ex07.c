#include <stdio.h>

int
main()
  {
  int v[10];
  int maior, menor;

  for(int i = 0; i < 10; i++)
    {
    printf("Digite um numero:\n");
    scanf("%d", &v[i]);

    if(i == 0)
      {
      maior = v[i];
      menor = v[i];
      }
    if(menor > v[i])
      {
      menor = v[i];
      }
    if(maior < v[i])
      {
      maior = v[i];
      }
    }

  printf("Maior - %d\n", maior);
  printf("Menor - %d\n", menor);

  return 0;
  }
