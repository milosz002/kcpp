#include <iostream>
#include <iomanip>

using namespace std;

/*
Napisz program z przykładami manipulacji strumieniem cout:
- setw, setprecision, setfill, fixed, scientific, hex, dec... etc (patrz plik kcpp02.pdf)
- nazwać program LManipulacjaStrumieniemCout.cc

  Spraw aby na ekran wypisało to co jest pomiedzy liniami ze znakami =:
  ==================================================
  Wynika naszego działania: x.xxxxx jest niepoprawny ale:
     output:   xx.xxx    T:  x.xxx 
     output1:   x.xxxx   T: xx.xxxxx
     output2:   x.xxxx   T: xx.xxxxxx
     ---------------------------------
     average:  xx.xxxx   T: xx.xxxxxx
  ==================================================
*/

int main() {
    double x = 1.23456;
    double T = 2.34567;
    double average = (x + T) / 2.2;

    cout << setfill('=') << setw(50) << "" << endl;
    cout << "Wynik naszego dzialania: " << x << " jest niepoprawny ale:" << endl;
    cout << setfill(' ');
    cout << setw(9) << "output: " << setw(10) << setprecision(4) << x << "   T: " << setw(5) << T << endl;
    cout << setw(10) << "output1: " << setw(9) << setprecision(5) << x << "   T: " << setw(7) << setprecision(6) << T << endl;
    cout << setw(10) << "output2: " << setw(9) << setprecision(5)  << x << "   T: " << setw(7) << setprecision(7) << T << endl;
    cout << setfill('-') << setw(50) << "" << endl;
    cout << setfill(' ');
    cout << setw(10) << "average: " << setw(9) << setprecision(5) << average << "   T: " << setw(7)<< setprecision(7) << T << endl;
    cout << setfill('=') << setw(50) << "" << endl;

    return 0;
}
