#include <iostream>

using namespace std;

int main() {
    int liczbaPierwsza;
    int liczbaDruga;
    cout << " Podaj pierwsza liczbe: ";
    cin >> liczbaPierwsza;  
    
    cout << " Podaj druga liczbe: ";
    cin >> liczbaDruga;

    int suma = liczbaPierwsza + liczbaDruga;

    cout << "suma = " << suma;  // cout << "suma = " << liczbaPierwsza + liczbaDruga;
    
    return 0;
}