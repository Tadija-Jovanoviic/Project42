/*
na programskom jeziku C napisati strukturni
program koji zadati nesortirani niz realnih brojeva AN transformiše u niz BN. Niz BN je sortiran tako da
element sa indeksom N/2 ima najveću vrednost (maxN), dok su naredni elementi naizmenično sa leve i
desne strane. Levo od (maxN) je naredni maksimalni (maxN-1) dok je desno sledeći maksimalni (maxN-2),
levo (maxN-3), desno (maxN-4), itd. Dimenzije i elemente niza AN unosi korisnik. Prikazati niz BN nakon
transformacije.
Primer:
N = 5
AN = 3.4 1.3 4.8 8.6 6.9
BN = 3.4 6.9 8.6 4.8 1.3
*/

main()
{
	int n, i, j;
	float a[50], t, b[50];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%f", &a[i]);
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j + 1] > a[j])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	printf("\n");
	j = 0;
	for (i = 0; i < n; i++)
	{
		b[n / 2 + j] = a[i];
		if (j < 0)
			j = -j;
		else
			j = -j - 1;
	}
	for (i = 0; i < n; i++)
		printf("%f\t", b[i]);
	system("pause");
}