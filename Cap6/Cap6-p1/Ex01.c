#include <stdio.h>

int
main()
  {
  int v[6];

  for(int i = 0; i < 6; i++)
    {
    printf("Digite um numero\n");
    scanf("%d", &v[i]);
    }
  
  for(int i = 0; i < 6; i++)
    {
    printf("%d ", v[i]);
    }
	printf("\n");

  return 0;
  }
