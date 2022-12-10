#include <iostream>
#include <string>

using namespace std;
string normalizacja(string s);

int main()
{
    string miasto;
    cout << "Podaj nazwe miasta: ";
    getline(cin, miasto);
    miasto = normalizacja(miasto);
    cout << "[" << miasto << "]";
    return 0;
}

string normalizacja(string s)
{
    // if(s[0]==' ')
    //     s.erase(0,1);
    while (s[0] == ' ')
        s.erase(0, 1);
    while (s[s.length() - 1] == ' ')
        s.erase(s.length() - 1, 1);
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    s[0] = toupper(s[0]);
    int nr = s.find(' ');
    if (nr > 0)
        s[nr + 1] = toupper(s[nr + 1]);
    return s;
}