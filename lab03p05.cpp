#include <iostream>

using namespace std;

int main()
{
    int tab[100];
    int n;
    cout << "n=";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "x=";
        cin >> tab[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "tab[" << i << "]=" << tab[i]<<"  ";
    }
    return 0;
}