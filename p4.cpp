#include <iostream>

using namespace std;

int main() {


    // tablica: []

    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //t[0] + t[1] + t[2] + t[3]


    // i++ ;
    // i = i + 1;
 
    //int suma; // nie wiadomo co jest w suma??

    int suma = 0;

    for (int i=0; i <= 9; i++){     //    for (inicjalizacja; warunke zakonczenia; skok)
        cout << t[i] << " ";
        suma += t[i]; // suma = suma + t[i];
    }

    cout << endl << "suma jest rowna " << suma << endl; //endl - przejscei do nowej linii

    return 0;
}