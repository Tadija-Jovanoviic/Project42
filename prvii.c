// vidi komentar za https://github.com/Tadija-Jovanoviic/Project42/blob/master/prvi1.2.24.c

#include<stdio.h>
int main()
{
	int N, broj, sumaCifara, i, j;
	printf("Unesite broj N: ");
	scanf_s("%d", &N);
	sumaCifara = 0;
	for (i = 0; i < N; i++)
	{
		printf("Unesite broj: ");
		scanf_s("%d", &broj);
		sumaCifara = 0;
		while (broj > 0)
		{
			sumaCifara += broj % 10;
			broj /= 10;
		}
		int prost = 1;
		j = 2;
		while (j <= sumaCifara / 2 &&prost != 0)
		{
			if (sumaCifara % j == 0)
				prost = 0;
			j++;
		}
		if (prost)
						printf("Suma cifara je prost broj.\n");
		else
			printf("Suma cifara nije prost broj.\n");	
	}
	return 0;
}
