#include<stdio.h>
int main () 
{ 
	int broj, cifra;
	int zbirNeparnih = 0, zbirParnih = 0, mesto = 1, razlika;
	printf("Unesite broj: ");
	scanf_s("%d", &broj);
	while (broj != 0)
	{
		cifra = broj % 10;
				if (mesto % 2 == 1) 
			zbirNeparnih += cifra;
		else 
			zbirParnih += cifra;
		broj /= 10;
		mesto++;
	}
	razlika = zbirNeparnih - zbirParnih;
	if (razlika < 0) 
		razlika = -razlika;
	if (razlika == 0 || razlika == 11)
		printf("Broj je deljiv.\n");
	else 
		printf("Broj nije deljiv.\n");
	return 0;
}
