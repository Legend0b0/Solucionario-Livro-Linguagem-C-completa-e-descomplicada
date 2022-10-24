#include <stdio.h>

int
main()
  {
  int v[10];
  int b;

  for(int i = 0; i < 10; i++)
    { 
    
    do{
      b = 1;
      printf("Digite os numeros do vetor (diferentes)\n");
      scanf("%d", &v[i]);

      for(int j = 0; j < i; j++)
        {
        if(v[i] == v[j])
          {
					printf("Numero Repetido!\n");
          b = 0;
          }
        }
      } while(b == 0);
    }

  for(int i = 0; i < 10; i++)
    {
    printf("-> %d ", v[i]);
    }
  printf("\n");

  return 0;
  }
