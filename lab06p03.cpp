#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void statystyka(string n);
void wypisz();
int tab[256];

int main()
{
    string nazwa;
    cout << "Podaj nazwe pliku: ";
    getline(cin, nazwa);
    statystyka(nazwa);
    wypisz();
    return 0;
}

void statystyka(string n)
{
    // wyzerowanie tablicy
    for (int i = 0; i < 256; i++)
        tab[i] = 0;
    fstream plik;
    int nr;
    plik.open(n, ios::in);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return;
    }
    string wiersz;
    while (!plik.eof())
    {
        getline(plik, wiersz);
        for (int i = 0; i < wiersz.length(); i++)
        {
            nr = (int)wiersz[i];
            tab[nr]++;
        }
    }
    plik.close();
}

void wypisz()
{
    for (int i = 28; i < 128; i++)
        cout << "[" << (char)i << "]=" << tab[i] << " ";
}