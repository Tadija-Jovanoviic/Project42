#include<stdio.h>
int main()
{
	int broj, brojCpy, brojac;
	brojac = 0;
	printf("Unesite broj: ");
	scanf_s("%d", &broj);
	while (broj != 0)
	{
		brojCpy = broj;
	while (brojCpy >= 10)
	{
		brojCpy = brojCpy / 10;
	}
	if (brojCpy % 2 != 0)
	{
		brojac++;
	}
	printf("Unesite broj: \n");
	scanf_s("%d", &broj);
	}
	printf("Broj unesenih brojeva sa neparnom prvim cifrom je: %d \n", brojac);
	return 0;
}