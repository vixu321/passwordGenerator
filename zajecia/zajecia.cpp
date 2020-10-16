#include <iostream>
#include <stdio.h>
#include <time.h>
#include <fstream>


using namespace std;

void numberGenerator() {
    int min, max;
    int ilosc, dlugosc;
    char litera;
    float number;

    system("CLS");

    cout << "Podaj minimalna liczbe, ktora chcesz wylosowac: ";
    cin >> min;
    cout << "Podaj maksymalna liczbe, ktora chcesz wylosowac: ";
    cin >> max;


    srand(time(0));

        number = rand() % (max - min + 1) + min;
        cout << number << endl;
        
}

void passwordGenerator() {


   ofstream plikTekstowy("passwords.txt");
   char litera;
   int ilosc;
   int dlugosc;
   float number;

   system("CLS");
   srand(time(0));
   cout << "Okresl dlugosc hasla: ";
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
   cout << "Hasla te zostaly zapisane w folderze projektu";

   plikTekstowy.close();
}

void sortRandomNumbers() {
    system("CLS");
    int numbers[10];
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        numbers[i] = rand();
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i + 1] > numbers[i]) {
            int temp = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i+1] = temp;
            i = -1;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << endl;
    }



}



int main()
{
    int wybor;
    cout << "Co chcialbys wygenerowac: "<<endl;
    cout << "1. Losowy numer w podanym zakresie." << endl;
    cout << "2. Losowe haslo i zapis tego hasla do pliku." << endl;
    cout << "3. Sortowanie losowych numerow." << endl;
    cin >> wybor;

    switch (wybor) {
    case 1: numberGenerator();
        break;
    case 2: passwordGenerator();
        break;
    case 3: sortRandomNumbers();
        break;
    default: return 0;
    }
    return 0;
}



 







