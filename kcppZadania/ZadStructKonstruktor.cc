#include <iostream>

using namespace std;

struct MyStruct {
    int value;

    // Domyślny konstruktor
    MyStruct() {
        cout<< "Wywolano domyslny konstruktor"<< endl;
        value = 0;
    }

    // Konstruktor z argumentem
    MyStruct(int v) : value(v) {
        cout<< "Wywolano konstruktor z argumentem"<< endl;
    }
};

int main() {
    MyStruct struct1;
    MyStruct struct2(10);

    return 0;
}
