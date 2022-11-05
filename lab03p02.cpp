#include <iostream>

using namespace std;

int main()
{
    int x, i = 0, s = 0;
    do
    {
        cout << "x=";
        cin >> x;
        if (x >= 0)
        {
            s += x; // s=s+x
            i++;
        }
    } while (x >= 0);
    if (i != 0)
    {
        double srednia = (double)s / i;
        cout << "srednia=" << srednia;
    }
    else
    {
        cout << "brak danych";
    }
    return 0;
}