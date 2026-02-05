/*
Na programskom jeziku C napisati strukturni
program koji određuje vrednost izraza A∩B\C nad zadatim skupovima realnih brojeva. Korisnik učitava
elemente skupova AN, BM i CK sa standardnog ulaza. Rezultat izraza upisati u tekstualni fajl izlaz.txt.
*/

#include <stdio.h>
int main() {
	int i, j, iPres, iKon, duzA, duzB, duzC, A[50], B[50], C[50], presek[50], konacni[50],
		uOba;
	FILE* f;
	scanf("%d", &duzA);
	scanf("%d", &duzB);
	scanf("%d", &duzC);
	for (i = 0; i < duzA; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < duzB; i++)
		scanf("%d", &B[i]);
	for (i = 0; i < duzC; i++)
		scanf("%d", &C[i]);
	/* A presek B */
	iPres = 0; /* poc. vrednost brojaca preseka */
	uOba = 0;
	for (i = 0; i < duzA; i++) /* za svaki element iz A */
	{
		for (j = 0; j < duzB; j++) /* idemo kroz ceo B */
		{ /* ako taj iz A postoji na bilo kojoj poziciji u B */
			if (A[i] == B[j])
				uOba = 1; /* onda taj iz A ulazi u presek */
		} /* zato indikator ulaska postavljamo na 1 */
		/* kraj prolaska kroz B ali i dalje smo u petlji kroz A */
		if (uOba == 1) /* ako je indikator ulaska u presek setovan */
		{
			presek[iPres] = A[i]; /* onda taj ulazi u presek */
			iPres++; /* pozicioniram se na sledece mesto u preseku */
		}
		uOba = 0; /* resetujemo indikator ulaska u presek */
	}
	/* i tako proveravamo za svaki element skupa A, da li ga ima i u B */
	/* nakon završetka petlje po i u nizu ce biti presek[] presek skupova A i B */
	printf("\n\n");
	/* kontrolno stampanje preseka */
	printf("presek:\n");
	for (i = 0; i < iPres; i++)
		printf("%d ", presek[i]);
	printf("\n\n");
	/* presek bez C (razlika preseka i C-a) */
	/* ovaj put indikator radi suprotno: ukoliko dati element preseka NE postoji u C */
	/* onda taj element preseka ide u konacan skup */
	/* znaci radimo istu detekciju prisustva elementa preseka u skupu C, kao gore */
	/* samo sto je uslov ulaska u konacni skup suprotan */
	iKon = 0; /* poc. vrednost brojaca konacnog skupa */
		uOba = 0;
	for (i = 0; i < iPres; i++) /* za svaki element iz preseka */
	{
		for (j = 0; j < duzC; j++) /* idemo kroz ceo C */
		{ /* ako taj iz preseka postoji na bilo kojoj poziciji u C */
			if (presek[i] == C[j])
				uOba = 1; /* postavljamo indikator na keca */
		}
		/* kraj prolaska kroz C ali i dalje smo u petlji kroz presek */
		if (uOba == 0) /* ako je indikator na nuli (element NE postoji u C) */
		{
			konacni[iKon] = presek[i]; /* onda taj ulazi u razliku */
			iKon++; /* pozicioniram se na sledece mesto u preseku */
		}
		uOba = 0; /* resetujemo indikator ulaska u presek */
	}
	/* kontrolno stampanje konacnog */
	printf("konacni:\n");
	for (i = 0; i < iKon; i++)
		printf("%d ", konacni[i]);
	printf("\n\n");
	f = fopen("izlaz.txt", "w");
	for (i = 0; i < iKon; i++)
		fprintf(f, "%d ", konacni[i]);
	fclose(f);
	return 0;
}