#include <stdio.h>

int main()
{
    int N = 10, i;

    int proizvod = 1, suma = 0;

    for (i = 0; i < N; i++) {
        int broj, brojCpy;
        int zbirCifara = 0, Najmanjacifra = 9, Najvecacifra = 0;

        printf("Unesite broj [%d/%d]: ", i + 1, N);
        scanf_s("%d", &broj);

        brojCpy = broj;
        if (brojCpy < 0) brojCpy = -brojCpy;

        while (brojCpy > 0) {
            int cifra = brojCpy % 10;
            zbirCifara += cifra;
            if (cifra < Najmanjacifra) Najmanjacifra = cifra;
            if (cifra > Najvecacifra) Najvecacifra = cifra;
            brojCpy /= 10;
        }

        if (zbirCifara != 0 && broj % zbirCifara == 0)
            proizvod *= broj;

        if (Najmanjacifra < Najvecacifra)
        {
            suma += broj;
        }
    }

    printf("Proizvod brojeva deljivih sumom cifara: %d\n", proizvod);
    printf("Suma brojeva cija je najmanja cifra manja od najvece: %d\n", suma);

    return 0;
}