#include <iostream>

using namespace std;

/*
Napisz program sprawdzający czy liczba jest parzysta/nieparzysta:
- trzy funkcje:
  (a) w jednej sprawdzamy z wykorzystaniem operacji bitowych (&);
  (b) w drugiej inaczej (eg. modulo)
  (c) w trzeciej sprawdzenie z użyciem operatora warunkowego zamiast if (lub jako warunek w if: TRUE || FALSE; (... ? 0 : 1))
  - w kodzie funkcji (a) proszę rozpisać jako komentarz przykładowe sprawdzenie
*/

bool a(int num){
    /*
    Przykładowo liczba 12 czyli binarnie 1100
    sprawdzamy ostatni bit, jeśli jest równy 0 to liczba jest parzysta a jeśli 1 to nieparzysta
    */
    return (num & 1) == 0;
}

bool b(int num){
    return (num % 2) == 0;
}

bool c(int num){
    return num % 2 ? 0 : 1;
}

int main() {
    int num;

    cout << "Podaj liczbe: ";
    cin >> num;

    if (a(num)) {
        cout << "Metoda bitowa: Liczba jest parzysta." << endl;
    } else {
        cout << "Metoda bitowa: Liczba jest nieparzysta." << endl;
    }

    if (b(num)) {
        cout << "Metoda modulo: Liczba jest parzysta." << endl;
    } else {
        cout << "Metoda modulo: Liczba jest nieparzysta." << endl;
    }

    if (c(num)) {
        cout << "Metoda warunkowa: Liczba jest parzysta." << endl;
    } else {
        cout << "Metoda warunkowa: Liczba jest nieparzysta." << endl;
    }

    return 0;
}
