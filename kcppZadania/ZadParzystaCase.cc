#include <iostream>

using namespace std;

bool a(int num){
    /*
    Przykładowo liczba 12 czyli binarnie 1100
    sprawdzamy ostatni bit, jeśli jest równy 0 to liczba jest parzysta a jeśli 1 to nieparzysta
    */
    return (num & 1) == 0;
}

int main() {
    int num;

    cout << "Podaj liczbe: ";
    cin >> num;

    switch (a(num)){
        case 1:
            cout << "Metoda bitowa: Liczba jest parzysta." << endl;
            break;
        case 0:
            cout << "Metoda bitowa: Liczba jest nieparzysta." << endl;
            break;
    }

    return 0;
}
