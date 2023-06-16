#include <iostream>

#define USE_MACRO  // Definicja makra

using namespace std;

#define STRINGIFY(x) #x   // Makro do konwersji argumentu na łańcuch znaków

int main() {
    #ifdef USE_MACRO
        cout << "Makro jest zdefiniowane." << endl;
    #else
        cout << "Makro nie jest zdefiniowane." << endl;
    #endif

    #ifndef USE_MACRO
        cout << "Makro nie jest zdefiniowane." << endl;
    #else
        cout << "Makro jest zdefiniowane." << endl;
    #endif

    // Użycie operatora #
    int value = 42;
    cout << "Wartosc zmiennej: " << value << endl;
    cout << "Nazwa zmiennej: " << STRINGIFY(value) << endl;

    // Użycie operatora ##
    int x = 1;
    int y = 2;
    cout << "Wartosc x + y: " << x + y << endl;
    cout << "Nazwa zmiennej: " << STRINGIFY(x##y) << endl;

    return 0;
}
