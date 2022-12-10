#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string nazwa;
    cout << "Podaj nazwe pliku: ";
    getline(cin, nazwa);
    plik.open(nazwa, ios::in);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return 0;
    }
    string wiersz;
    while (!plik.eof())
    {
        getline(plik, wiersz);
        cout << "\"" << wiersz << "\"" << endl;
    }
    plik.close();
    return 0;
}