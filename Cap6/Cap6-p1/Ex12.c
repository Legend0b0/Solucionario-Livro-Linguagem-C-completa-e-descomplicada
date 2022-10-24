#include <stdio.h>

int
main()
  {
  int v[10];
  int cont;

  for(int i = 0; i < 10; i++)
    {
    printf("Escreva os valores para o vetor\n");
    scanf("%d", &v[i]);
    }

  for(int i = 0; i < 10; i++)
    {
    cont = 0;

    for(int j = 0; j < 10 ; j++)
      {
      if(v[i] == v[j])
        {
        cont++;
        }
      }
    if(cont > 1)
      {
      printf("%d\n", v[i]);
      }
    }

  return 0;
  }
