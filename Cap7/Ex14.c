#include <stdio.h>
#include <string.h>
#define chave 3

int
main()
	{
	char cifra[150];
	int aux, count;	

	puts("Digite a frase a ser cifrada");
	fgets(cifra, 150, stdin);

	for(int i = 0; i < strlen(cifra); i++, count++)
		{
		if((cifra[i] >= 65) && (cifra[i] <= 90))
			{
			cifra[i] = cifra[i] + chave;
				
			if(cifra[i] > 90)
				{
				cifra[i] = cifra[i] - 26;
				}
			}
		if((cifra[i] >= 97) && (cifra[i] <= 122))
			{
			cifra[i] = cifra[i] + chave;	
			
			if(cifra[i] > 122)
				{
				cifra[i] = cifra[i] - 26;
				}		
			}	
		}

	printf("%s", cifra);

	return 0;
	}
