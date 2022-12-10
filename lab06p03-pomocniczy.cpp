#include <iostream>
#include <string>

using namespace std;
// statystyka liter w łańcuchu
int tab[256];

int main()
{
    string s;
    for (int i = 0; i < 256; i++)
        tab[i] = 0;
    cout << "Podaj tekst: ";
    getline(cin, s);
    int nr;
    for (int i = 0; i < s.length(); i++)
    {
        nr = (int)s[i];
        tab[nr]++;
    }

    for (int i = 28; i < 128; i++)
        cout << "[" << (char)i << "]=" << tab[i] << " ";

    return 0;
}