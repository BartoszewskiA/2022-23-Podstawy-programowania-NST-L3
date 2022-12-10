#include <iostream>
#include <string>

using namespace std;
bool walidacja(string s);

int main()
{
    string email;
    do
    {
        cout << "Podaj email (***@****.pl): ";
        getline(cin, email);
    } while (!walidacja(email));
    cout << "adres prawidlowy";
    // if (walidacja(email))
    //     cout << "adres prawidlowy";
    // else
    //     cout << "nieprawidlowy format adresu email";

    return 0;
}

bool walidacja(string s)
{
    // test1: minimum 6 znakow
    if (s.length() < 6)
        return false;
    // test 2: czy wystepuje znak @
    int poz;
    poz = s.find('@');
    if (poz < 0 || poz==0 || poz> s.length()-4)
        return false;
    // test 3: domena .wp
    string domena = s.substr(s.length() - 3, 3);
    if (domena != ".pl")
        return false;
    // adres przeszedl wszystkie testy
    return true;
}