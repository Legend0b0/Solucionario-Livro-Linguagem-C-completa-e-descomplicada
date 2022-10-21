#include <stdio.h>
#include <math.h>

int
main()
  {
  int n1, n2, n3, x;
  double media = 0;

  printf("Escolha uma media:\n1 - geometrica\n2 - ponderada\n3 - harmonica\n4 - arietimetrica\n");
  scanf("%d", &x);

  printf("Digite 3 numeros\n");
  scanf("%d %d %d", &n1, &n2, &n3);
  
  switch (x)
    {
    case 1:
      {
     	media = pow((n1 * n2 * n3), 1/3);
      printf("A media geometrica é: %lf\n", media);
      }
      break;
    case 2:
      {
      media = (n1 + (2 * n2) + (3 * n3)) / 6;
      printf("A media ponderada é: %lf\n", media);
      }
      break;
    case 3:
      {
      media = 1 / (1/n1) + (1/n2) + (1/n3);
      printf("A media harmonica é: %lf\n", media);
      }
      break;
    case 4:
      {
      media = (n1 + n2 + n3) / 3;
      printf("A media arietimetrica é: %lf\n", media);
      }
      break;
    default:
    }

  return(0);
  }
