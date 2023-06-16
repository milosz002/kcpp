#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int num;

    // C
    printf("[C] Podaj liczbe calkowita: ");
    scanf("%d", &num);
    printf("[C] Wprowadzona liczba: %d\n", num);

    // C++
    cout<<"[C++] Podaj liczbe calkowita: ";
    cin>>num;
    cout<<"[C++] Wprowadzona liczba: "<<num<<endl;


    return 0;
}
