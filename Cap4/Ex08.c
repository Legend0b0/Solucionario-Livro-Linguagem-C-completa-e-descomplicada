#include <stdio.h>

int
main()
  {
  int i, n;

  printf("Digite a idade\n");
  scanf("%d", &i);
  
  if ((i >= 5) && (i <= 7))
    {
    printf("Infantil A\n");
    }
  if ((i >= 8) && (i <= 10))
    {
    printf("Infantil B\n");
    }
  if ((i >= 11) && (i <= 13))
    {
    printf("Juvenil A\n");
    }
  if ((i >= 14) && (i <= 17))
    {
    printf("Juvenil B\n");
    }
  if (i >= 18)
    {
    printf("Senior\n");
    }

  return(0);
  }
