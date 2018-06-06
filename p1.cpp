#include <iostream>

using namespace std;

int main() {

    // definicje zmiennych: typ nazwaZmiennej;
    int a; // int - liczbowe, calkowite: 1,2 , 3, 4,5 ,... -1, -2, ...
    unsigned int b; // calkowita

    float c = 0.15; // float - zmiennoprzecinkowy typ

    float d = 0.2;
    float e = 0.3;

    cout << d + e;

    float dom = 123.45; //rezerwuje miejsce w pamieci i nazywa je 'dom'

    dom = 12.1; // bierze miejsce w pamieci nazwane 'dom' i przypisuje nowa wartosc

    dom = dom + 15;

    dom += 7; 

    cout << "Wpisz liczbe:";
    cin >> a;
    cout << "Liczba" << a;
    return 0;
}