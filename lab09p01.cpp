#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string slownik[100];
int n = 0; // liczba elementow w slowniku

void wczytaj_slownik();
void wygeneruj_plik();

int main()
{
    wczytaj_slownik();
    wygeneruj_plik();
    // wypisujemy tablice slownik[] na ekran
    // for (int i = 0; i < n; i++)
    //     cout
    // << slownik[i] << endl;

    return 0;
}

void wczytaj_slownik()
{
    fstream plik;
    plik.open("slownik.txt", ios::in);
    if (!plik.good())
    {
        cout << "Brak slownika";
        return;
    }
    while (!plik.eof())
    {
        getline(plik, slownik[n]);
        n++;
    }
    plik.close();
}

void wygeneruj_plik()
{
    int ile;
    int akapity;
    string s;
    string nazwa;
    cout << "podaj rozmiar pliku (liczbe wyrazow): ";
    // cin >> ile;
    getline(cin, s);
    ile = atoi(s.c_str());
    cout << "Podaj rozmiar akapitow (1 - 10): ";
    // cin >> akapity;
    getline(cin, s);
    akapity = atoi(s.c_str());
    cout << "Podaj nazwe pliku: ";
    getline(cin, nazwa);
    // generowanie pliku
    fstream plik;
    plik.open(nazwa + ".txt", ios::out);
    int poz;
    for (int i = 0; i < ile; i++)
    {
        poz = rand() % n;
        plik << slownik[poz];
        if (i % 10 + 1 > akapity)
            plik << "." << endl;
        else
            plik << " ";
    }
    plik.close();
}