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

#include <stdio.h>
int main()
{
	float x, y;
	int oblastX = 0, oblastY = 0, oblastZ = 0, oblastOstalo = 0, k, AB, BC, CA;
	char oblast;
	do
	{
		printf("Unesite koordinate tacke: ");
		scanf("%f%f", &x, &y);
		k = x * x + (y - 1) * (y - 1) < 9;
		if (k && y > x + 4)
		{
			oblast = 'X';
			oblastX++;
		}
		else if (k && y < 1 && y>0 && x > 0)
		{
			oblast = 'Y';
			oblastY++;
		}
		else if (k && y < 0 && x < 0)
		{
			oblast = 'Z';
			oblastZ++;
		}
		else
		{
			oblast = '*';
			oblastOstalo++;
		}
		printf("Tacka (%f, %f) pripada oblasti %c.\n", x, y, oblast);
		AB = y == x + 4 && x >= -3 && x <= 0;
		BC = y == 1 && x >= -3 && x <= 3;
		CA = y == -x + 4 && x >= 0 && x <= 3;
	} while (!AB && !BC && !CA);
	printf("Broj tacaka po oblastima:\nX = %d\nY = %d\nZ = %d\n* = %d\n", oblastX, oblastY,
		oblastZ, oblastOstalo);
	return 0;
}