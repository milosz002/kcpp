#include <iostream>
#include "ZadKcpp.h"

using namespace std;

int main() {
    ZadKcpp zad;

    int wybor = 0;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Ustawianie danych osoby" << endl;
        cout << "2. Wypisanie danych osoby" << endl;
        cout << "3. Obliczenie roku urodzenia" << endl;
        cout << "4. Obliczenie BMI" << endl;
        cout << "5. Aktualna data i czas" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;

        switch (wybor) {
            case 0:
                return 0;
            case 1:
                zad.set_data();
                break;
            case 2:
                zad.show_data();
                break;
            case 3:
                zad.year_of_birth();
                break;
            case 4:
                zad.calculate_bmi();
                break;
            case 5:
                zad.show_date_and_time();
                break;
            default:
                cout << "Nieprawidlowy wybor. Sprobuj ponownie." << endl;
        }
        cout << endl;
    }

    return 0;
}
