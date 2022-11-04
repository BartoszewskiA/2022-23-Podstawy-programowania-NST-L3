#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if (b != 0)
    {
        double wynik = (double)a / b;
        cout << a << "/" << b << "=" << wynik;
    }
    else
    {
        cout << "Nie dziel przez zero";
    }
    return 0;
}