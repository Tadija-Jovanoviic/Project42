# Rešeni Zadaci iz Programiranja

Spisak rešenih zadataka u programskom jeziku C.

---

## 1. Spajanje elemenata iz dva fajla (`drugi3.2.22.c`)

**Zadatak:**
Napisati strukturni program koji formira niz celih brojeva na osnovu podataka iz fajlova `prvi.txt` i `drugi.txt`. Program čita po jedan ceo broj iz oba fajla i dodaje ih u niz tako da prvo doda manji pa onda veći broj. Ukoliko u jednom fajlu ima više elemenata u odnosu na drugi, te elemente nadovezati na kreirani niz. Prikazati niz nakon kreiranja.

**Rešenje:**
Program otvara oba fajla za čitanje i iterativno učitava parove brojeva. Za svaki par, najpre dodaje manji, zatim veći broj u rezultujući niz. Koristi `feof()` funkciju za proveru kraja fajlova i nastavlja sa čitanjem dok god bar jedan fajl ima elemenata. Preostali elementi iz dužeg fajla se nadovezuju na kraj niza.

---

## 2. Brisanje i zamena elemenata u nizu (`drugi22.3.22.c`)

**Zadatak:**
Napisati program koji iz unetog niza A briše sva pojavljivanja broja x, dok sva pojavljivanja broja y menja brojem z. Korisnik unosi dužinu niza, elemente niza i vrednosti x, y i z. Prikazati niz nakon transformacije.

**Rešenje:**
Program koristi `while` petlju za prolazak kroz niz. Kada naiđe na element jednak x, pomera sve elemente desno od njega za jedno mesto ulevo i smanjuje dužinu niza. Kada naiđe na element jednak y, zamenjuje ga sa z. Važno je da se indeks ne uvećava nakon brisanja elementa, jer se na toj poziciji sada nalazi sledeći element.

---

## 3. Prosečna vrednost okolnih elemenata matrice (`drugi6.6.22.c`)

**Zadatak:**
Napisati strukturni program za unos elemenata celobrojne kvadratne matrice A(N×N). Korisnik unosi parametar K, dimenziju matrice N, a zatim i elemente matrice. Nakon unosa potrebno je generisati novu matricu realnih brojeva B(N×N). Nova matrica se formira tako što jedan element matrice B predstavlja prosečnu vrednost K elemenata oko odgovarajućeg elementa iz matrice A, uključujući i taj element. Prikazati matricu B nakon generisanja.

**Rešenje:**
Program koristi četiri ugneždene petlje. Spoljašnje dve petlje prolaze kroz svaki element matrice A. Za svaki element, unutrašnje dve petlje prolaze kroz sve elemente u opsegu K pozicija oko tekućeg elementa. Prilikom računanja proseka uzimaju se u obzir samo elementi koji postoje (provera granica matrice). Suma se deli brojem validnih elemenata da bi se dobila prosečna vrednost.

---

## 4. Klasifikacija tačaka po oblastima (`drugi5.6.23.c`)

**Zadatak:**
*Napomena: Opis zadatka u komentaru fajla ne odgovara implementaciji. Prema komentaru, trebalo bi transformisati niz AN u sortirani niz BN sa specifičnom strukturom. Međutim, implementacija rešava problem klasifikacije koordinata.*

**Implementirano rešenje:**
Program učitava koordinate tačaka (x, y) i klasifikuje ih u oblasti X, Y, Z ili * na osnovu njihovog položaja. Tačke se testiraju da li se nalaze unutar kruga sa centrom (0, 1) i radijusom 3. Dodatni uslovi određuju specifičnu oblast:
- **X**: unutar kruga i iznad prave y = x + 4
- **Y**: unutar kruga, ispod y = 1, iznad y = 0, desno od x = 0
- **Z**: unutar kruga, ispod x-ose i levo od y-ose
- **\***: sve ostale tačke

Program se završava kada se unese tačka koja leži na ivici trougla ABC definisanog pravama AB, BC i CA. Na kraju ispisuje broj tačaka po oblastima.

---

## 5. Transformacija čarobnih elemenata (`drugi4.7.23.c`)

**Zadatak:**
Napisati strukturni program koji pronalazi sve čarobne elemente u nizu A i menja ih prostim brojem X pomnoženim faktorom Y. Korisnik unosi prirodne brojeve veće od 1, a unos se prekida kada se unese prvi prost broj - broj X. Element u nizu je čaroban ako je jednak razlici kvadrata prethodna dva elementa: A[i] = A[i-2]² - A[i-1]². Prva dva elementa niza ne mogu biti čarobna. Faktor Y predstavlja redni broj čarobnog elementa. Prikazati niz nakon transformacije. Zabranjena je upotreba pomoćnih nizova.

**Rešenje:**
Program učitava elemente u niz sve dok ne unese prost broj (koji postaje X). Provera prostosti se vrši testiranjem deljivosti brojem od 2 do √n. Nakon unosa, program prolazi kroz niz počev od trećeg elementa i proverava da li je element čaroban. Za svaki čarobni element, zamenjuje ga sa X * rbr (gde je rbr redni broj čarobnog elementa). Program čuva prethodna dva elementa u promenljivama `pret1` i `pret2` i ažurira ih tokom iteracije.

---

## 6. Uvećanje elemenata između min i max (`drugi23.8.22.c`)

**Zadatak:**
Napisati strukturni program koji pronalazi poziciju najmanjeg i najvećeg elementa u celobrojnom nizu. Nakon toga sve elemente između pronađenih elemenata uvećati za 1. Broj elemenata niza i elemente niza zadaje korisnik. Prikazati niz nakon unosa i transformacije.

**Rešenje:**
Program prvo pronalazi indekse najmanjeg (`imin`) i najvećeg (`imax`) elementa u nizu. Zatim u petlji od `imin + 1` do `imax` uvećava sve elemente za 1. Važno je primetiti da se elementi između min i max uvećavaju, ali ne i sami min i max elementi.

---

## 7. Transformacija niza prema srednjoj vrednosti (`drugi13.9.22.c`)

**Zadatak:**
Napisati strukturni program za učitavanje i transformaciju niza celih brojeva. Korisnik unosi broj elemenata i elemente niza. Potrebno je izračunati vrednost S koja predstavlja srednju vrednost niza. Zatim pronaći X koji je najveći element među elementima manjim od S i element Y koji je najmanji među elementima većim od S. Zameniti mesta elementima X i Y. Smatrati da postoji po jedan takav element. Prikazati vrednosti X, Y, S i niz nakon transformacije.

**Rešenje:**
Program prvo računa srednju vrednost S sabiranjem svih elemenata i deljenjem sa N. Zatim u jednom prolasku kroz niz pronalazi:
- Indeks `ix` elementa koji je manji od S i ujedno najveći među takvim elementima
- Indeks `iy` elementa koji je veći od S i ujedno najmanji među takvim elementima

Na kraju, menja mesta elementima na pozicijama `ix` i `iy` i ispisuje S, X, Y i transformisani niz.

---

## 8. Izračunavanje vrednosti polinoma (`drugi1.10.22.c`)

**Zadatak:**
Napisati strukturni program koji sa standardnog ulaza učitava niz celih brojeva veličine N. Pored niza brojeva potrebno je učitati i ceo broj x. Učitan niz celih brojeva predstavlja faktore koji množe članove polinoma, gde je prvi element niza slobodan član, drugi element stoji uz x¹, treći uz x², itd. Potrebno je izračunati vrednost polinoma sa unetim faktorima za vrednost x. Prikazati izračunatu vrednost.

**Primer:**
Za niz = [1, 0, 2, -5, 6] i x = 2 => 6×x⁴ - 5×x³ + 2×x² + 0×x¹ + 1×x⁰ => Rezultat je: 65

**Rešenje:**
Program učitava broj faktora N, zatim niz faktora i vrednost x. U petlji prolazi kroz sve faktore i za svaki izračunava `faktori[i] * pow(x, i)`, što sabira u ukupan rezultat. Funkcija `pow(x, i)` iz biblioteke `math.h` se koristi za stepenovanje.

---

## Napomene

- Svi programi su testirani i funkcionalni
- Programi koriste standardne C biblioteke (`stdio.h`, `math.h`, `string.h`)
- Neki fajlovi sadrže korisne komentare sa objašnjenjima implementacije
- Fajl `drugi5.6.23.c` ima neslaganje između opisa zadatka i implementacije
