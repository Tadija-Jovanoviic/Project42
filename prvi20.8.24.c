#include<stdio.h>
int main()
{
		int broj, cifra, proizvod_neparnih = 1, proizvod_parnih = 1, koren;
		printf("Unesite prirodni broj: ");
		scanf_s("%d", &broj);
		while (broj > 0)
		{
			cifra = broj % 10;
			if (cifra % 2 == 0)
				proizvod_parnih *= cifra;
			else
				proizvod_neparnih *= cifra;
			broj /= 10;
		}
		koren = (int)sqrt(proizvod_neparnih);
		if (koren * koren == proizvod_neparnih)
			printf("Neparni");
		else
		{
			koren = (int)sqrt(proizvod_parnih);
			if (koren * koren == proizvod_parnih)
				printf("Parni");
			else
				printf("Nema kvadrata");
		}
	}