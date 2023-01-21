#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
} tab[100];

int main()
{
    fstream plik;
    plik.open("osoby.db", ios::in);
    if (!plik.good())
    {
        cout << "brak bazy danych";
        return 0;
    }
    string s;
    getline(plik, s);
    int n = atoi(s.c_str());
    for (int i = 0; i < n; i++)
    {
        getline(plik, tab[i].imie);
        getline(plik, tab[i].nazwisko);
        getline(plik,s);
        tab[i].wiek = atoi(s.c_str());
    }
    plik.close();
    for (int i = 0; i < n; i++)
        cout << "Nazwisko: " << tab[i].nazwisko << endl
             << "Imie: " << tab[i].imie << endl
             << "Wiek: " << tab[i].wiek << endl;
    return 0;
}

void funkcja()
{
    osoba ktos;
}