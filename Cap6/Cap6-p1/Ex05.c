#include <stdio.h>

int
main()
  {
	int x, y;
  int v[8];

  for(int i = 0; i < 8; i++)
    {
    printf("Digite um numero:\n");
    scanf("%d", &v[i]);
    }

  printf("Digite as duas posicoes\n");
  scanf("%d %d", &x, &y);
  
	x--;
  y--;
  
	int soma = v[x] + v[y];
  
  printf("Soma das duas posicoes: %d\n", soma);

  return 0;
  }
