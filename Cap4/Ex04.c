#include <stdio.h>

int
main()
  {
  float s, e;

  printf("Digite seu salario:\n");
  scanf("%f", &s);

  printf("Digite o valor desejado do emprestimo:\n");
  scanf("%f", &e);
  
  s = s / 5;
  if (s > e)
    {
    printf("Emprestimo concedido\n");
    }
  else
    {
    printf("Emprestimo não concedido\n");
    }

  return(0);
  }
