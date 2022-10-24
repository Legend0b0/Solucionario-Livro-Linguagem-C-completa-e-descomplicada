#include <stdio.h>

int
main()
  {
  int A[6];

  for(int i = 0; i < 6; i++)
    {
    printf("Digite 1 numero\n");
    scanf("%d", &A[i]);
    }

  int soma = A[0] + A[1] + A[5];

  printf("Soma da posição [0], [1] e [5] - %d\n", soma);
  
	printf("Troque o valor da posição [4]:\n");
  scanf("%d", &A[4]);

  for(int i = 0; i < 6; i++)
    {
    printf("%d ", A[i]);
    }
  printf("\n");
  
	return 0;
  }
