/*
na programskom jeziku C napisati
strukturni program koji sa standardnog ulaza učitava niz celih brojeva veličine N, gde N zadaje
korisnik. Pored niza brojeva potrebno je učitati i ceo broj x. Učitan niz celih brojeva predstavlja
faktore koji množe članove polinoma, gde je prvi element niza slobodan član, drugi element niza
stoji uz x
1
, treći element niza stoji uz x
2
itd. Potrebno je izračunati vrednost polinoma sa unetim
faktorima za vrednost x. Prikazati izračunatu vrednost.
Primer: Za Niz = [1 0 2 -5 6] i x = 2 => 6*x
4
– 5*x
3 + 2*x
2 + 0*x
1 + 1*x
0 => Rezultat je: 65
*/



#include <stdio.h>
#include <math.h>
int main() {
	int n, faktori[100], i, x, rez;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &faktori[i]);
	scanf("%d", &x);
	rez = 0;
	for (i = 0; i < n; i++)
	{
		rez += faktori[i] * pow(x, i);
	}
	printf("%d", rez);
	return 0;