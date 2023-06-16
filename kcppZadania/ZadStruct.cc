#include <iostream>

using namespace std;

/*
Stwórz plik z działająca strukturą:
- deklaracja,
- definicja obiektów (w dowolny sposób):
  - wywołanie,
  - zmiana wartości,
  - odczyt wartości,
  // - czy można stworzyć konstruktor (inicjalizacja wartości poczatkowych - standard, lista inicjalizacyjna)
- nazwij program: ZadStruct.cc
*/

struct Person {
    string name;
    int age;
    float height;

    // Konstruktor
    Person(string n, int a, float h) : name(n), age(a), height(h) {}

    void displayStructInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {

    Person person1("Mateusz", 28, 183.7);
    Person person2("Kamil", 34, 185.2);

    cout <<"Person 1:"<< endl;
    person1.displayStructInfo();

    person2.age = 35;
    person2.height = 170.3;

    cout <<"Person 2:"<< endl;
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    cout << "Height: " << person2.height << endl;

    return 0;
}