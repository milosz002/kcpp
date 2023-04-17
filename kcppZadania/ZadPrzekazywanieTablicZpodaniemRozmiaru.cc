#include <iostream>

using namespace std;

// Napisz program przekazujący tablice z zachowaniem rozmiaru
// Czy się da?
// Jeśli tak to proszę wykonać zadanie:
// - nazwać program: ZadPrzekazywanieTablic.cc
// Jeśli się nie da to proszę wykonać zadanie:
// - zdefiniować ogólną funkcję w której nie jest na sztywno ustawiony rozmiar tablicy, która przekazujemy:
// - nazwać program: ZadPrzekazywanieTablicZpodaniemRozmiaru.cc

// nie da się przekazać do funkcji tablicy z zachowaniem rozmiaru, ponieważ tablice w C++ są przekazywane do funkcji jako wskaźnik na pierwszy element tablicy

void array_test(int array[], int array_size, int multiplier){
    for(int i = 0; i < array_size; i++){
        array[i] = array[i] * multiplier;
    }
}

void show_array(int array[], int array_size){
    for(int i = 0; i < array_size; i++){
        cout << array[i] << " ";
        if(i != 0 && i%5 == 0){
            cout<<endl;
        }
    }
    cout<<endl;
}

int main(){
    const int array_size = 30;
    int array[array_size];

    // wypelnianie tablicy
    for(int i = 0; i < array_size; i++){
        array[i] = i;
    }

    cout<<"BEFORE:"<<endl;
    show_array(array, array_size);

    array_test(array, array_size, 5);
    cout<<"AFTER:"<<endl;
    show_array(array, array_size);

    return 0;
}