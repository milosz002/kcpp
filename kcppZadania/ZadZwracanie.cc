#include <iostream>

using namespace std;

// Zadanie: Napisać program z czterema funkcjami z których każda zwraca inaczej:
// 1. Przez wartość
// 2. Przez referencje
// 3. Przez wskaźnik
// 4. Tablice (proszę się zastanowić o co tak naprawę chodzi)
// - nazwać program: ZadZwracanie.cc

int przez_wartosc(int value) {
    value = 1;
    return value;
}

void przez_referencje(int& value) {
    value = 2;
}

void przez_wskaznik(int* value) {
    *value = 3;
}

void tablica(int array[]) {
    for(int i = 0; i < 10; i++){
        array[i] = i;
    }
}

int main(int argc, char* argv[]) {

    int value = 0;
    cout<<"[0] value = "<<value<<endl;

    value = przez_wartosc(value);
    cout<<"[1] value = "<<value<<endl;

    przez_referencje(value);
    cout<<"[2] value = "<<value<<endl;

    przez_wskaznik(&value);
    cout<<"[3] value = "<<value<<endl;

    int array[10];
    tablica(array);
    for(int i = 0; i < 10; i++){
        cout<<"array["<<i<<"] = "<< array[i] << endl;
    }

    return 0;
}