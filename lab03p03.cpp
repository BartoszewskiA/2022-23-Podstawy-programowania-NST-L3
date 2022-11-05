#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if(i==5) return 0;
        cout << i << " ";
    }
    cout<<"instrukcja wykonywana po petli";
    return 0;
}