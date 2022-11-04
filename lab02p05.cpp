#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ile razy wypisac? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": c++" << endl;
    }
    return 0;
}