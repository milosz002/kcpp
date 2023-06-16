#include <iostream>

using namespace std;

/*
Stwórz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) z przykładami konstruktorów i 
inicializacją zmiennych:
- domyślny konstruktor,
- domyślny destruktor,
- konstruktor z niepustą liczbą zmiennych argumentów
- inicjalizacja zmiennych:
  - 'standardowa',
  - inicjalizacyjna za pomocą listy inicjalizacyjnej
*/

class MyClass {
    public:
        int value_a;
        int value_b;

        // Konstruktor bez argumentów
        MyClass() {
            cout << "Wywolano domyslny konstruktor" << endl;
        }

        // Konstruktor z argumentami
        MyClass(int a, int b) {
            cout << "Wywolano konstruktor z argumentami" << endl;
            value_a = a;
            value_b = b;
        }

        // Destruktor
        ~MyClass() {
            cout << "Wywolano destruktor" << endl;
        }
};

int main() {
    MyClass obj1;
    MyClass obj2(10, 20);

    return 0;
}
