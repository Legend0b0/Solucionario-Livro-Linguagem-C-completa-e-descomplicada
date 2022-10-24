#include <stdio.h>

int
main()
  {
  int n[10];
  int soma = 0, maior, menor;

  printf("Digite 10 numeros\n");

  for(int i = 0; i < 10; i++)
    {
    scanf("%d", &n[i]);

		if((i == 0) || (maior < n[i]))
			{
			maior = n[i];
			}
		if((i == 0) || (menor > n[i]))
			{
			menor = n[i];
			}
    }

  printf("Menor  = %d\n", menor);
  printf("Maior = %d\n", maior);

  return 0;
  }
