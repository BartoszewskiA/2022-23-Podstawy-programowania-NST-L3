#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    srand(time(NULL));
    for (int j = 0; j < 25; j++)
    {
        for (int i = 0; i < 6; i++)
            cout << rand() % 49 + 1 << " ";
        cout << endl;
    }
    return 0;
}