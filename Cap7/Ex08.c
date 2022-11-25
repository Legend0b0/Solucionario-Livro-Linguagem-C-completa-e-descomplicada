#include <stdio.h>
#include <string.h>

int
main()
	{
	char str1[100];
	char str2[100];

	int bol = 0;

	puts("Escreva a string 1");
	fgets(str1, 100, stdin);

	puts("Escreva a string 2");
	fgets(str2, 100, stdin);

	int size1 = strlen(str1) - 2;
	int size2 = strlen(str2) - 2;

	for(int i = 0; i < size1; i++)
		{
		if((str1[i] == str2[0]) && ((size1 - i) >= size2))
			{
			int aux = i;
			for(int j = 0; j < size2; aux++, j++)
				{
				if(str1[aux] == str2[j])
					{
					bol = 1;
					}
				else
					{
					bol = 0;
					break;
					}
				}
			}
		}

	printf("%d\n", strlen(str2));

	return 0;
	}
