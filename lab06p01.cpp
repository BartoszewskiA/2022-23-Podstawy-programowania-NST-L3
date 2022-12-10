#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char znak;
    int ile = 0;
    cout << "Podaj tekst: ";
    getline(cin, s);
    // tworze wersje napisu z samych wielkich liter
    string s2 = "";
    for (int i = 0; i < s.length(); i++)
        s2 += toupper(s[i]);

    cout << "Jakiego znaku szukasz: ";
    znak = getchar();
    znak = toupper(znak); // zamieniam znak na duży
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == znak)
            ile++;
    }
    cout << "Znak \"" << znak << "\" wystapil " << ile << " razy";

    return 0;
}