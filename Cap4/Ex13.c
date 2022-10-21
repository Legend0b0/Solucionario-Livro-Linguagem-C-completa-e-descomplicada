#include <stdio.h>

int
main()
  {
  float a, b;
  char s;
  
  printf("Digite a operacao '+', '-', '*', '/':\n");
  s = getchar();
  printf("Digite dois numeros\n");
  scanf("%f %f", &a, &b);

  switch(s)
    {
      case '+':
        printf("%f\n", (a + b));
        break;
      case '-':
        printf("%f\n", (a - b));
        break;
      case '*':
        printf("%f\n", (a * b));
        break;
      case '/':
        printf("%f\n", (a / b));
        break;
      default:
        printf("Nenhum\n");
        break;
    }

  return(0);
  }
