#include <iostream>

using namespace std;

/*
Napisz program pokazujący działanie instrukcji (każda jako osobna funkcja; trzy funkcje od a do c):
(a) while    (pokazujące while z inkrementacją: i++, ++i)
(b) do-while (pokazujące do-while z inkrementacją: i++, ++i)
(c) for
- wykorzystaj: break, continue, return
*/

void a(int num){
    int i = 0;
    while(i < num){
        cout<<"["<<i<<"] while loop"<<endl;
        if(i == 10){
            break;
        }
        i++;
    }
}

void b(int num){
    int i = 0;
    do {
        cout<<"["<<i<<"] do-while loop"<<endl;
        if(i == 10){
            return;
        }
        i++;
    }
    while (i < num);
}

void c(int num){
    for(int i = 0; i < num; i++){
        cout<<"["<<i<<"] for loop"<<endl;
    }
}

int main() {
    int num;

    cout << "Podaj liczbe: ";
    cin >> num;

    a(num);
    b(num);
    c(num);


    return 0;
}
