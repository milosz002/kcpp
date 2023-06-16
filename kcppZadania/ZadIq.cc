#include <iostream>
using namespace std;

int main() {

    int q[10]={0,1,2,3,4,5,6,7,8,9};
    int i = 3;
    cout << "q[i]: " << q[i] << endl; // i-ty element tablicy
    cout << "i[q]: " << i[q] << endl; // i[q] oznacza element tablicy znajdujący się na pozycji i-tej od początku tablicy

    // operator [] dla tablic i wskaźników działa przemienne

    return 0;
}