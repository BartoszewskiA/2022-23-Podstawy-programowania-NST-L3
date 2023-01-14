#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("osoba.txt", ios::in);
    string imie, nazwisko, temp;
    int ile = 0, wiek;
    getline(plik, temp);
    ile = atoi(temp.c_str());
    for (int i = 0; i < ile; i++)
    {
        getline(plik, imie);
        getline(plik, nazwisko);
        getline(plik, temp);
        wiek = atoi(temp.c_str());
        cout << imie << " " << nazwisko << " " << wiek << endl;
    }

    plik.close();
    return 0;
}