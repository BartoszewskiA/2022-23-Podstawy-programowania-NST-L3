#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Podaj numer dnia tygodnia: ";
    cin >> nr;
    switch (nr)
    {
    case 1:
        cout << "Ni";
        break;
    case 2:
        cout << "Pn";
        break;
    case 3:
        cout << "Wt";
        break;
    case 4:
        cout << "Sr";
        break;
    case 5:
        cout << "Czw";
        break;
    case 6:
        cout << "Pi";
        break;
    case 7:
        cout << "So";
        break;
    default:
        cout << "Nieprawidlowy numer";
    }
    return 0;
}