#include <stdio.h>
#include <math.h>

int
main()
  {
  int n;

  do
    {
    printf("Digite o tamanho do vetor (<= 20)\n");
    scanf("%d", &n);
    } while ((n >= 20) && (n < 0));

  float A[n];
  float B[n];

  for(int i = 0; i < n; i++)
    {
    printf("Digite os valores do vetor\n");
    scanf("%f", &A[i]);
    
    B[i] = (pow(A[i], 2));
    }
  
	printf("A[i] -> B[i]\n");
  
	for(int i = 0; i < n; i++)
    {
    printf("%0.1f -> %0.1f\n", A[i], B[i]);
    }

  return 0;
  }
