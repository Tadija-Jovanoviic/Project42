// bilo bi super da na pocetku programa u komentaru stavis text zadatka, lekse cemo da pratimo sta se radi u code

#include "stdio.h"
void main()
{
	int A[50], N, x, y, z, i, j;
	printf("Unesite broj elemenata niza: ");
	scanf_s("%d", &N);
	printf("Unesite elemente niza:\n");
	for (i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	printf("Unesite redom vrednosti za x, y i z:\n");
	scanf_s("%d%d%d", &x, &y, &z);
	
	// ova while petlja je mogla da bude zapisana i kao for petlja

	// ovo je potpuno ekvivalentno (while <=> for)
	// int i = 0;
	// while (i < N)
	// {
	//    ....
	//    i++;
	// }
		
	// for (i = 0; i < N; i++)
	// {
	//   ...
	// }
	
	i = 0;	
	while (i < N)
	{
		if (A[i] == x)
		{
			for (j = i; j < N - 1; j++)
				A[j] = A[j + 1];
			N--;
		}
		else if (A[i] == y)
		{
			A[i] = z;
			i++;
		}
		else
			i++;
	}
	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
}
