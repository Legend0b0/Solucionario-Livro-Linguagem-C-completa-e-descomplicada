#include <stdio.h>
#include <stdlib.h>

int
main()
  {
  int e;
  float n;

  printf("Digite o preco do item:\n");
  scanf("%f", &n);

  printf("Digite o estado relacionado\n1 - 'MG'\n2 - 'SP'\n3 - 'RJ'\n4 - 'MS'\n");
  scanf("%d", &e);

  switch (e)
    { 
    case 1:
      n = n * 1.07;
      printf("O preco final é: %0.1f\n", n);
      break;
    case 2:
      n = n * 1.12;
      printf("O preco final é: %0.1f\n", n);     
      break;
    case 3:
      n = n * 1.15;
      printf("O preco final é: %0.1f\n", n);
      break;
    case 4:
      n = n * 1.08;
      printf("O preco final é: %0.1f\n", n);
      break;
    defalt : exit(1);
    } 

  return(0);
  }
