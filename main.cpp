#include <iostream>

using namespace std;
int liczba[10];

void wpis() {
    cout << "Wpisz swoje liczby po Enterze" << endl;
    for(int i=0; i<8; i++){
        cin >> liczba[i];
    }
}

void wypis() {
    cout << "Oto twoje liczby: ";
    for(int x=0; x<8; x++) {
        cout << liczba[x] << ",";
    }
}

void sortowanie() {
    int i, j,temp,passes=0;
    cout<<endl;
    for(i = 0; i<10; i++) {
        for(j = i+1; j<10; j++)
        {
            if(liczba[j] < liczba[i]) {
                temp = liczba[i];
                liczba[i] = liczba[j];
                liczba[j] = temp;
            }
            for(int g=0; g<10; g++){
                
                cout << liczba[g] << "";
        }

        passes++;
    }
    cout <<"Wysortowane elementy: \n";
    for(i = 0; i<10; i++) {
        cout <<liczba[i]<<"\t";
    }
    cout<<"\nIlosc sortowan:"<<passes<<endl;
}

main(){
    //Wpis i wypis liczb
    wpis();
    wypis();
    ///////////////////////

    //Sortowanie
    sortowanie();

}
