#include <stdio.h>
#include <math.h>

int
main()
  {
  int n;
  double d;
  float media = 0.0, somatoria = 0.0;
	
  printf("Tamanho do vetor:\n");
  scanf("%d", &n);

  float v[n];
  
  for(int i = 0; i < n; i++)
    {
    printf("Digite um numero para o vetor:\n");
    scanf("%f", &v[i]);
    media += v[i];
    }

  media /= n;

	for(int i = 0; i < n; i++)
		{
		somatoria = v[i] - media;
		}

	n--;
	somatoria = pow(somatoria, 2);

	d = somatoria / n;
	d = sqrt(d);

  printf("Desvio padrao: %lf\n", d);

  return 0;
  }
