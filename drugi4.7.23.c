/*
 Na programskom jeziku C napisati strukturni
program koji pronalazi sve čarobne elemente u nizu A i menja ih prostim brojem X pomnoženim faktorom
Y. Korisnik unosi prirodne brojeve veće od 1, a unos se prekida kada se unese prvi prost broj - broj X.
Element u nizu je čaroban ako je jednak razlici kvadrata prethodna dva elementa u nizu. Prva dva elementa
niza ne mogu biti čarobna. Za čarobni element A[i] važi (A[i] = A[i-2]2
- A[i-1]2
) i (i ≥ 2). Faktor Y
predstavlja redni broj čarobnog elementa. Za prvi čarobni element je Y = 1, dok se pronalaskom svakog
narednog čarobnog elementa uvećava za 1. Smatrati da niz ima najmanje 3 elementa. Prikazati niz nakon
transformacije.
Napomena: Zabranjena je upotreba pomoćnih nizova
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int niz[30], i, n = 0, prost, pret1, pret2, rbr = 1;
	printf("Unesite elemente niza:\n");
	do
	{
		scanf("%d", &niz[n]);
		i = 2;
		prost = 1;
		while (prost && i <= sqrt(niz[n]))
		{
			if (niz[n] % i == 0)
				prost = 0;
			else
				i++;
		}
		n++;
	} while (!prost);
	pret1 = niz[0];
	pret2 = niz[1];
	for (i = 2; i < n; i++)
	{
		if (pret1 * pret1 - pret2 * pret2 == niz[i])
		{
			pret1 = pret2;
			pret2 = niz[i];
			niz[i] = niz[n - 1] * rbr;
			rbr++;
		}
		else
		{
			pret1 = pret2;
			pret2 = niz[i];
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
	return 0;
}