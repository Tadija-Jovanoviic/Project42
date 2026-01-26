/*
na programskom jeziku C napisati
strukturni program koji pronalazi poziciju najmanjeg i najve?eg elementa u celobrojnom nizu.
Nakon toga sve elemente izme?u prona?enih elemenata uve?ati za 1. Broj elemenata niza i
elemente niza zadaje korisnik. Prikazati niz nakon unosa i transformacije.
*/



#include <string.h>
int main()
{
	int i, n, niz[50], imin, imax;
	imin = 0;
	imax = 0;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &niz[i]);
	for (i = 1; i < n; i++)
	{
		if (niz[i] < niz[imin])
		{
			imin = i;
		}
		if (niz[i] > niz[imax])
		{
			imax = i;
		}
	}
	for (i = imin + 1; i < imax; i++)
		niz[i]++;
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
	return 0;
}