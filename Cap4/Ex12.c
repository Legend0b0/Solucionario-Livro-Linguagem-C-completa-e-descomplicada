#include <stdio.h>

int
main()
  {
  int s;

  printf("Digite um dia da semana em numero:\n");
  scanf("%d", &s);

  switch(s)
    {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda feira\n");
      break;
    case 3:
      printf("Terca feira\n");
      break;
    case 4:
      printf("Quarta feira\n");
      break;
    case 5:
      printf("Quinta feira\n");
      break;
    case 6:
      printf("Sexta feira\n");
      break;
    case 7:
      printf("Sabado\n");
      break;
    default:
      printf("Nenhum\n");
      break;
    }

  return(0);
  }
