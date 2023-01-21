#include <iostream>
#include <time.h>

using namespace std;

struct RGB
{
    int R;
    int G;
    int B;
};

RGB losuj_kolor();

int main()
{
    srand(time(NULL));
    RGB kolory[100];
    int ile;
    cout << "Ile kolorow wylosowac: ";
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        kolory[i] = losuj_kolor();
    }
    for (int i = 0; i < ile; i++)
        cout << "R=" << kolory[i].R
             << " G=" << kolory[i].G
             << " B=" << kolory[i].B << endl;
    return 0;
}

RGB losuj_kolor()
{
    RGB kolor;
    kolor.R = rand() % 256;
    kolor.G = rand() % 256;
    kolor.B = rand() % 256;
    return kolor;
}