#include <iostream>
#include <Windows.h>
#include <cstdlib>
using namespace std;

string choice;
int liczby[10];
int licznik = 0;
int n = 10;

void wstep() {

    cout << "Witaj Wpisz mi jakies liczbya a ja je posortuje!" << endl;
    cout << "UWAGA!, Wpisz wszystkie liczby po ENTERZE!" << endl;

}

void wpis() {
    for(int x = 0; x < 10; x++)
    {
        cin >> liczby[x];
        if (liczby[x] <= 0)
        {
            cout << "Zly skladnik!";
            exit(0);
        }
    }
}

void wypis() {
    cout << "Oto twoje liczby: ";
    for(int x=0; x<10; x++) {
        cout << liczby[x] << ",";
    }
    cout << endl;
}

void sortowanie() {

    cout << "Zaczymam Sortowac: " << endl;

    while (n > 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (liczby[i] < liczby[i + 1])
            {
                swap(liczby[i], liczby[i + 1]);
            }
        }

        for (int z = 0; z < 10; z++)
        {
            cout << liczby[z] << " ";
        }

        licznik = licznik + 1;

        cout << endl;

        n = n - 1;
    }

    cout << endl << endl << "Posortowane w " << licznik << " posortowaniach!" << endl;

}

void wyjscie() {

    cout << "Dziekuje za uzycie naszego programu!" << endl;

}
main()
{
    wstep();
    wpis();
    wypis();
    sortowanie();
    wyjscie();
}
