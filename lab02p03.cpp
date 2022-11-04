#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    double delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "x1=" << x1
             << endl
             << "x2=" << x2;
    }
    else if (delta == 0)
    {
        double x0 = -b / (2 * a);
        cout << "x0=" << x0;
    }
    else
    {
        cout << "Brak rozwiazan";
    }

    return 0;
}