#include <iostream>

using namespace std;

int main()
{
    int x, i = 0, s = 0;
    // do
    // {
    //     cout << "x=";
    //     cin >> x;
    //     if (x >= 0)
    //     {
    //         s += x; // s=s+x
    //         i++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // } while(1);
    while (1)
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            break;
        i++;
        s += x;
    }
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