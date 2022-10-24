#include <stdio.h>

int
main()
  {
  int A[10];
  int B[10];
  int C[10];
  
  for(int i = 0; i < 10; i++)
    {
    printf("Escreva um numero para o vetor A\n");
    scanf("%d", &A[i]);
    }

  for(int i = 0; i < 10; i++)
    {
    printf("Escreva um numero para o vetor B\n");
    scanf("%d", &B[i]);
    }

	printf("Vetor C - ");

  for(int i = 0; i < 10; i++)
    {
    C[i] = A[i] - B[i];
    printf("%d ", C[i]);
    }
	printf("\n");
  
  return 0;
  }
