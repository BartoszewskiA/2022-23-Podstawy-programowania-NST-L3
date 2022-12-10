#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    // znaki "!@" oznacza koniec wczytywnia
    fstream plik;
    string nazwa;
    cout << "Podaj nazwe pliku: ";
    getline(cin, nazwa);
    plik.open(nazwa, ios::out);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    string wiersz;
    // do
    // {
    //     cout << ": ";
    //     getline(cin, wiersz);
    //     if (wiersz != "!@")
    //         plik << wiersz << endl;
    // } while (wiersz != "!@");

    while (1)
    {
        cout << ": ";
        getline(cin, wiersz);
        if (wiersz == "!@")
            break;
        plik << wiersz << endl;
    }
    plik.close();
    return 0;
}