#include <iostream>

using namespace std;

void wylosuj_tablice(int tab[], int n, int a, int b);
void wypisz(int tab[], int n);
void porownaj(int t1[], int t2[], int n);

int main()
{

    int tab_01[1000];
    int tab_02[1000];
    int ile, maks, minim;
    cout << "Ile liczb wylosowac: ";
    cin >> ile; // tablice maja być tej samej dlugosci
    cout << "Maksimum: ";
    cin >> maks;
    cout << "Minimum: ";
    cin >> minim;

    wylosuj_tablice(tab_01, ile, minim, maks);
    wylosuj_tablice(tab_02, ile, minim, maks);
    wypisz(tab_01, ile);
    cout << endl
         << "---------------------------------------" << endl;
    wypisz(tab_02, ile);
    cout << endl
         << "---------------------------------------" << endl;
    porownaj(tab_01, tab_02, ile);
    return 0;
}

void wylosuj_tablice(int tab[], int n, int a, int b)
{
    for (int i = 0; i < n; i++)
        tab[i] = rand() % (b - a + 1) + a;
}

void wypisz(int tab[], int n)
{
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
}

void porownaj(int t1[], int t2[], int n)
{
    for (int i = 0; i < n; i++)
        if (t1[i] == t2[i])
            cout << "t[" << i << "]=" << t1[i] << " ";
}