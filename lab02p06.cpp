#include <iostream>

using namespace std;
int main()
{
    int n,m;
    cout<<"ile wierszy? ";
    cin>>n;
    cout<<"ile kolumn?";
    cin>>m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << i*j << "\t";
        cout << endl;
    }
    return 0;
}