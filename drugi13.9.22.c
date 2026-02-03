/*
na programskom jeziku C napisati
strukturni program za učitavanje i transformaciju niza celih brojeva. Korisnik unosi broj elemenata
i elemente niza. U programu je potrebno izračunati vrednost S koja predstavlja srednju vrednost
niza. Zatim pronaći X koji je najveći element među elementima manjim od S i element Y koji je
najmanji među elementima većim od S. Zameniti mesta elementima X i Y. Smatrati da postoji po
jedan takav element. Prikazati vrednosti X, Y, S i niz nakon transformacije.
*/

#include <stdio.h>
int main()
{
	int N, A[30], X, Y, i, ix = -1, iy = -1;
	float S = 0;
	printf("Unesite broj elemenata niza:\n");
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	for (i = 0; i < N; i++)
		S += A[i];
	S /= N;
	for (i = 0; i < N; i++)
	{
		if (A[i] < S && (ix == -1 || A[i] > A[ix]))
			ix = i;
		else if (A[i] > S && (iy == -1 || A[i] < A[iy]))
			iy = i;
	}
	X = A[ix];
	Y = A[iy];
	A[ix] = Y;
	A[iy] = X;
	printf("S=%f X=%d Y=%d\n", S, X, Y);
	printf("Niz nakon transformacije:\n");
	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
	return 0;
}