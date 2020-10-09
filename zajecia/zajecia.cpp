#include <iostream>
#include <stdio.h>
#include <time.h>


using namespace std;

float number;

int main()
{
    char litera;
    int ilosc;
    srand(time(0));
    ilosc = 10;
    for (int i = 0; i < ilosc; i++) {
        number = rand() % 93 + 32;
        litera = char(number);
        cout << litera;
    }
    return 0;
}

