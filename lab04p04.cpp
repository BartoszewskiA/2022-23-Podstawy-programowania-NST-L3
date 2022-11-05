#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int maszyna[50];
    int numer;
    for (int i = 0; i < 50; i++)
        maszyna[i] = 1;
    for (int i = 0; i < 6; i++)
    {
        do
        {
            numer = rand() % 49 + 1;
        } while (maszyna[numer] == 0);
        cout << numer << " ";
        maszyna[numer]=0;
    }
    return 0;
}