#include <iostream>
#include <stdio.h>
#include <time.h>
#include <fstream>


using namespace std;


int main()
{
    ofstream plikTekstowy("passwords.txt");
    char litera;
    int ilosc;
    int dlugosc;
    float number;

    
    srand(time(0));
    cout << "Okresc dlugosc hasla: ";
    cin >> dlugosc;
    cout << "Ile takich hasel chcesz: ";
    cin >> ilosc;


    for (int i = 0; i < ilosc; i++) {
        for (int i = 0; i < dlugosc; i++) {
            number = rand() % 93 + 32;
            litera = char(number);
            plikTekstowy << litera;
        }
        plikTekstowy << '\n';
    }

    plikTekstowy.close();
    return 0;
}

