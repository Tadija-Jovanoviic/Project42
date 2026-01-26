// Ovaj primer odlicno ilustruje rad sa fajlovima
// potrudi se da ga razumes i upamtis

#include <stdio.h>
int main()
{
	int prvi, drugi, rezNiz[100], j, i = 0;
	
	// otvaranje fajla za citanje - "r" - bitno
	FILE* fprvi = fopen("prvi.txt", "r");
	
	FILE* fdrugi = fopen("drugi.txt", "r");
	
	// Ovaj uslov je jako interesantan - petlja se vrti dok se ne procitaju svi elementi iz oba fajla
	// imas eof (feof) - end of file funkciju koja proverava da li si stigao do kraja fajla
	// uslov moze da se zapise i kao
	// while (!(feof(fprvi) && feof(fdrugi))) - sto je, mozda, intuitivnije, jer onda pitas - dok nije kraj i prvog i drugog
	// ovo je direktna primena De Morganovog pravila: !(x1 and x2) = !x1 or !x2 - koje smo radili u racunarima
	while (!feof(fprvi) || !feof(fdrugi))
	{
		if (feof(fprvi))
		{
			fscanf(fdrugi, "%d", &drugi);
			rezNiz[i++] = drugi;
		}
		else if (feof(fdrugi))
		{
			fscanf(fprvi, "%d", &prvi);
			rezNiz[i++] = prvi;
		}
		else
		{
			fscanf(fdrugi, "%d", &drugi);
			fscanf(fprvi, "%d", &prvi);
			if (prvi < drugi)
			{
				rezNiz[i++] = prvi;
				rezNiz[i++] = drugi;
			}
			else
			{
				rezNiz[i++] = drugi;
				rezNiz[i++] = prvi;
			}
		}
	}
	fclose(fprvi);
	fclose(fdrugi);
	for (j = 0; j < i; j++)
	{
		printf("%d ", rezNiz[j]);
	}
	return 0;
}
