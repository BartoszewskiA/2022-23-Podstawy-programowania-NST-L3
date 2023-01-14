#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    char z;
    string s;
    int ile = 0;
    cout << "Jakiego znaku szukamy: ";
    z = getchar();
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, s);
        for (int i = 0; i < s.length(); i++)
            if (s[i] == z)
                ile++;
    }
    plik.close();

    cout << "Znak " << z << "wystapil " << ile << " razy";
    return 0;
}