#include<stdio.h>
int main()
{
	int broj, suma = 0, pozicija = 1, cifra, prost, i;
	printf("Unesite broj: ");
	scanf_s("%d", &broj);
	while (broj > 0)
	{
		cifra = broj % 10;
		if (pozicija % 2 != 0) suma += cifra;
		broj = broj / 10;
		pozicija++;
	}
	prost = 1;
	for (i = 2; i <= suma / 2; i++)
	{
		if (suma % i == 0)
		{
			prost = 0;
		}
	}
	if (prost) printf("Suma je prost broj \n");
	else printf("Suma nije prost broj \n");
	return 0;
}