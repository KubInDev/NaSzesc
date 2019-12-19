#include <iostream>
#include <Windows.h>
#include <cstdlib>
using namespace std;

string choice;
int dlugoscTabeli = 10;
int liczby[10];
int licznik = 0;

void wstep() {

    cout << "Witaj Wpisz mi jakies liczbya a ja je posortuje!" << endl;
    cout << "UWAGA!, Wpisz wszystkie liczby po ENTERZE!" << endl;

}

void wpis() {
    for(int q = 0; q < 10; q++)
    {
        cin >> liczby[q];
        if (liczby[q] <= 0)
        {
            cout << "Zly skladnik!";
            exit(0);
        }
    }
}

void wypis() {
    cout << "--------------------------------------------------------------------" << endl;
    cout << "Oto twoje liczby: ";
    for(int p=0; p<10; p++) {
        cout << liczby[p] << ",";
    }
    cout << endl;
}

void sortowanie() {

    cout << "--------------------------------------------------------------------" << endl;
    cout << "Zaczymam Sortowac: " << endl;

    while (dlugoscTabeli > 1)
    {
        for (int d = 0; d < dlugoscTabeli - 1; d++)
        {
            if (liczby[d] < liczby[d + 1])
            {
                swap(liczby[d], liczby[d + 1]);
            }
        }

        for (int z = 0; z < 10; z++)
        {
            cout << liczby[z] << " , ";
        }

        licznik = licznik + 1;

        cout << endl;

        dlugoscTabeli = dlugoscTabeli - 1;
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
