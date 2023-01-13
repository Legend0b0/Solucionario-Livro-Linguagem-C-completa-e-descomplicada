#include <stdio.h>

int print(char print1[150], char print2[150])
	{
	fputs(print1, stdout);
	fputs(print2, stdout);
	
	return 0;
	}

int
main()
	{
	char str1[150];
	char str2[150];

	puts("Escreva a string 1");
	fgets(str1, 150, stdin);

	puts("Escreva a string 2");
	fgets(str2, 150, stdin);

	if(((str1[0] >= 65) && (str1[0] <= 90) && (str2[0] >= 65) && (str2[0] <= 90)) || ((str1[0] >= 97) && (str1[0] <= 122) && (str2[0] >= 97) && (str2[0] <= 122)))
		{
		if(str1[0] <= str2[0])
			{
			print(str1, str2);
			}
		else
			{
			print(str2, str1);
			}
		return 0;
		}

	if((str1[0] >= 60) && (str1[0] <= 90) && (str2[0] >= 97) && (str2[0] <= 122))
		{
		if(str1[0] <= (str2[0] - 32))
			{
			print(str1, str2);
			}
		else
			{
			print(str2, str1);
			}
		return 0;
		}

	if((str1[0] >= 97) && (str1[0] <= 122) && (str2[0] >= 65) && (str2[0] <= 90))
		{
		if((str1[0] - 32) <= str2[0])
			{
			print(str1, str2);
			}
		else
			{
			print(str2, str1);
			}
		return 0;
		}

	print(str1, str2);

	return 0;
	}
