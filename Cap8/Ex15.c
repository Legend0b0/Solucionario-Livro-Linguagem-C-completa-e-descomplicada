#include <stdio.h>

union tipo
  {
  int i;
  float f;
  char c;
  } tipo1;

int
main()
  {
  puts("Entre com um numero inteiro");
  scanf("%d", &tipo1.i);

  printf("Int: %d\n", tipo1.i);
  printf("Char: %c\n", tipo1.c);

  return 0;
  }
