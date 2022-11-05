#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    const int DT = 2000;
    srand(time(NULL));
    int tab[DT];
    for (int i = 0; i < DT; i++)
        tab[i] = rand() % 201 - 100;
    long s = 0;
    for (int i = 0; i < DT; i++)
        s += tab[i];
    cout << "srednia=" << (double)s / DT;
    return 0;
}