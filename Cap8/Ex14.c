#include <stdio.h>

enum _compras {Cereal = 1, Aveia, Carne, Macarrao, Laranja, Maca, Acucar, Sal, Trigo, Feijao, Arroz, Cafe} compras;
float preco[12] = {13.8, 4.99, 49.99, 7.80, 2.50, 2.70, 20.00, 4.50, 5.50, 13.70, 17.30, 15.99};

int
main()
	{
	int n;
	
	puts("Entre com um numero de 1 a 12:");
	scanf("%d", &n);

	if(Cereal == n)
		{
		printf("Cereal - R$%0.2f\n", preco[n-1]);
		}
	if(Aveia == n)
		{
		printf("Aveia - R$%0.2f\n", preco[n-1]);
		}
	if(Carne == n)
		{
		printf("Carne - R$%0.2f\n", preco[n-1]);
		}
	if(Macarrao == n)
		{
		printf("Macarrao - R$%0.2f\n", preco[n-1]);
		}
	if(Laranja == n)
		{
		printf("Laranja - R$%0.2f\n", preco[n-1]);
		}
	if(Maca == n)
		{
		printf("Maca - R$%0.2f\n", preco[n-1]);
		}
	if(Acucar == n)
		{
		printf("Acucar - R$%0.2f\n", preco[n-1]);
		}
	if(Sal == n)
		{
		printf("Sal - R$%0.2f\n", preco[n-1]);
		}
	if(Trigo == n)
		{
		printf("Trigo - R$%0.2f\n", preco[n-1]);
		}
	if(Feijao == n)
		{
		printf("Feijao - R$%0.2f\n", preco[n-1]);
		}
	if(Arroz == n)
		{
		printf("Arroz - R$%0.2f\n", preco[n-1]);
		}
	if(Cafe == n)
		{
		printf("Cafe - %0.2f\n", preco[n-1]);
		}
	if((n < 1) || (n > 12))
		{
		puts("Insira um numero valido!");
		}

	return(0);
	}
