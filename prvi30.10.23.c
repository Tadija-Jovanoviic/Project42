/*
Na programskom jeziku C napisati
strukturni program za simulaciju jednostavnog kalkulatora. Korisnik unosi karaktere iz skupa
{‘0’, ‘1’, ‘2’, ‘3’, ‘4’, ‘5’, ‘6’, ‘7’, ‘8’, ‘9’, ‘+’, ‘-’}, a unos se prekida kada se pročita karakter
koji ne pripada skupu. Smatrati da korisnik započinje unos karakterom koji predstavlja cifru i da
neće uneti dve aritmetičke operacije zaredom. Ukoliko unese više cifara zaredom posmatrati
kombinaciju cifara kao višecifreni broj gde se prvo unosi cifra najveće težine. Svaki karakter se
unosi u novom redu. Prikazati rezultat na kraju programa. Napomena: Nije dozvoljeno korišćenje
indeksiranih promenljivih.

*/

#include <stdio.h>

int main() {
    char c;
    int broj = 0;
    int rezultat = 0;
    char op = '+';

    while (1) {
        scanf(" %c", &c);

        if (c >= '0' && c <= '9') {
            broj = broj * 10 + (c - '0');
        }
        else if (c == '+' || c == '-') {

            if (op == '+')
                rezultat = rezultat + broj;
            else
                rezultat = rezultat - broj;

            op = c;
            broj = 0;
        }
        else {
            break;
        }
    }

    if (op == '+')
        rezultat = rezultat + broj;
    else
        rezultat = rezultat - broj;

    printf("Rezultat = %d\n", rezultat);

    return 0;
}