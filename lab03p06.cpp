#include <iostream>

using namespace std;

int main()
{
    int tab[100];
    int n = 0;
    while (1)
    {
        cout << "x=";
        cin >> tab[n];
        if (tab[n] > 100 || tab[n] < -100)
            break;
        n++;
    }
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    return 0;
}