/* na programskom jeziku C napisati strukturni
program za unos elemenata celobrojne kvadratne matrice ANxN. Korisnik na početku programa unosi
parametar K, dimenziju matrice N, a zatim i elemente matrice ANxN. Nakon unosa elemenata potrebno je
generisati novu matricu realnih brojeva BNxN. Nova matrica se formira na osnovu elemenata matrice A, tako
što jedan elemenat matrice B predstavlja prosečnu vrednost K elemenata oko odgovarajućeg elementa iz
matrice A, uključujući i taj element. Prilikom izračunavanja prosečne vrednosti računati samo one elemente
koji postoje oko tekućeg elementa. Prikazati matricu B nakon generisanja.
Primer za K = 1 i N = 4. */

// lele, bas su ga zabiberili :)




// ne znam sta se tacno trazi u zadatku, ali 4 ugnjezdene petlje mi deluju kao overkill 
// mozda je zadatak stvarno zajeban, pa je neophodno

#include <stdio.h>
int main() {
	int A[20][20], n, k, i, j, p, q, brEl;
	float prosek, suma, B[20][20];
	scanf_s("%d", &k);
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf_s("%d", &A[i][j]);
	for (i = 0; i < n; i++)
	// ovde fali otvorena viticasta zagrada (code prolazi kompajliranje, ali nije citljiv)		
		for (j = 0; j < n; j++)
		{
			suma = 0;
			brEl = 0;
			for (p = i - k; p <= i + k; p++)
				for (q = j - k; q <= j + k; q++)
				{
					if (p >= 0 && p < n && q >= 0 && q < n) {
						suma += A[p][q];
						brEl++;
					}
				}
			prosek = suma / brEl;
			B[i][j] = prosek;
		}
	// ovde bi trebalo da se zatvori viticasta odozgo
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%.1f ", B[i][j]);
		printf("\n");
	}
	return 0;
}
