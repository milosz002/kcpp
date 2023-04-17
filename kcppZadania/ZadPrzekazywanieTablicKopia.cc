#include <iostream>
#include <array>

using namespace std;


// Napisz program przekazujący kopię tablicy. (Czy da się przekazać kopię?)
// - nazwać program: ZadPrzekazywanieTablicKopia.cc


void function(array<int, 5> arr) {
    arr[0] = 10;
    arr[3] = 100;
}

int main() {
    const int array_size = 5;
    array<int, array_size> array = {1, 2, 3, 4, 5};
    cout<<"BEFORE:"<<endl;
    for(int i = 0; i < array.size(); i++){
        cout<< array[i] << " ";
    }
    cout<<endl;

    function(array);
    cout<<"AFTER:"<<endl;
    for(int i = 0; i < array.size(); i++){
        cout<< array[i] << " ";
    }
    cout<<endl;

    return 0;
}
