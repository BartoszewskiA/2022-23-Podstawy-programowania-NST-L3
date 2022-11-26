#include <iostream>
#include <time.h>

using namespace std;
// zmienne globalne
int tab[1000];

// nagłówki funkcji
void wylosuj_tablice(int n, int a, int b);
void wypisz(int n);
int suma(int n);
int maksimum(int n);
int minimum(int n);
bool czy_wystapil(int x, int n);
int ile_razy_wystapil(int x, int n);
void wypisz_dodatnie(int n);
void wypisz_ujemne(int n);

int main()
{
    srand(time(NULL));
    int ile, maks, minim;
    cout << "Ile liczb wylosowac: ";
    cin >> ile;
    cout << "Maksimum: ";
    cin >> maks;
    cout << "Minimum: ";
    cin >> minim;
    wylosuj_tablice(ile, minim, maks);
    wypisz(ile);
    cout << endl
         << "suma=" << suma(ile);

    return 0;
}

void wylosuj_tablice(int n, int a, int b)
{
    for (int i = 0; i < n; i++)
        tab[i] = rand() % (b - a + 1) + a;
}

void wypisz(int n)
{
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
}

int suma(int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += tab[i];
    return suma;
}

int maksimum(int n)
{
    // int max = INT16_MIN;
    int max = tab[0];
    for (int i = 0; i < n; i++)
        if (tab[i] > max)
            max = tab[i];
    return max;
}

int minimum(int n)
{
    // int max = INT16_MAX;
    int min = tab[0];
    for (int i = 0; i < n; i++)
        if (tab[i] < min)
            min = tab[i];
    return min;
}

bool czy_wystapil(int x, int n)
{
    // Pierwsza wersja
    // bool flaga = false;
    // for (int i = 0; i < n; i++)
    //     if (tab[i] == x)
    //         flaga = true;
    // return flaga;
    // druga wersja
    for (int i = 0; i < n; i++)
    {
        if (tab[i] == x)
        {
            return true;
        }
    }
    // jeżeli program dotarł tu, to nie znalazl "x"
    return false;
}

int ile_razy_wystapil(int x, int n)
{
    int liczba = 0;
    for (int i = 0; i < n; i++)
        if (tab[i] == x)
            liczba++;
    return liczba;
}

void wypisz_dodatnie(int n)
{
    for (int i = 0; i < n; i++)
        if (tab[i] > 0)
            cout << tab[i] << " ";
}

void wypisz_ujemne(int n)
{
    for (int i = 0; i < n; i++)
        if (tab[i] < 0)
            cout << tab[i] << " ";
}