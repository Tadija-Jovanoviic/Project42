#include<stdio.h>
int main1()
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
		// ovo ti se sigurno ne kompajlira
		// treba: while (j <= sumaCifara / 2 && prost != 0)
		// operator AND (&&) mora da bude odvojen
		while (j <= sumaCifara / 2 &&prost != 0)
		{
			if (sumaCifara % j == 0)
				prost = 0;
			j++;
		}
		if (prost)
		// ovo ti je pobeglo u desno, treba lepo da se formatira	
						printf("Suma cifara je prost broj.\n");
		else
			printf("Suma cifara nije prost broj.\n");	
	}
	return 0;
}
