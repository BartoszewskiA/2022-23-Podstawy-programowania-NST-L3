#include <iostream>

using namespace std;

int main()
{
    int x, n, ujemne = 0, dodatnie = 0;
    cout << "Ile liczb wyczytac? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i + 1 << "]=";
        cin >> x;
        if (x >= 0)
            dodatnie++;
        else
            ujemne++;
    }
    if (dodatnie > ujemne)
        cout << "wiecej dodatnich";
    else if (dodatnie == ujemne)
        cout << "po rowno";
    else
        cout << "wiecej ujemnych";
    return 0;
}