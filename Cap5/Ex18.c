#include <stdio.h>

int
main()
  {
  int n, c = 2;
  float rest;

  printf("Escreva um numero\n");
  scanf("%d", &n);

	if(n > 1)
		{
	  for(int i = 2; i < n; i++)
	    {
	    rest = n % i;
	    if(rest == 0.0)
	      {
	      c++;
	      }
	    if((c > 2) || (n / 2 < i))
	      {
	      break;
	      }
	    }
	  if(c == 2)
	    {
	    printf("Eh primo\n");
	    }
	  else
	    {
	    printf("Nao eh primo\n");
	    }	
	  printf("%d\n", c);
		}

  return 0;
  }
