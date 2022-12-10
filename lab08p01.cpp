#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj tekst: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        if (i == 0 || i == s.length() - 1)
            cout << s[i];
        else
            cout << "*";
    return 0;
}