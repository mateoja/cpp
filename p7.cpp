#include <iostream>

 int main ()
 {

     int wys, punkty_karne;

    std::cout << "Na jakiej wyskosci lecimy? [w metrach]: ";
    std::cin >> wys;

     if(wys < 500)
    {
       std::cout << "\n" << wys << " metrow to za nisko !\n";
        punkty_karne = 1;

    }
    else 
    {
       std::cout << "\nNa wyskosci" << wys << "metrow jestes juz bezpieczny\n";
        punkty_karne = 0;
    }
std::cout << "Masz " << punkty_karne << " punktow karnych \n";
if(punkty_karne) std::cout << "popraw sie !";

 }


