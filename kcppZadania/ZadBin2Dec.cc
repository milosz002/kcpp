#include <iostream>
#include <string>

using namespace std;

int bin2dec(string bin_num) {
    int dec_num = 0;
    int power = 1;

    for(int i = bin_num.length() - 1; i >= 0; i--) {
        if(bin_num[i] == '1') {
            dec_num += power;
        }
        power *= 2;
    }

    return dec_num;
}

int main() {
    string bin_num;

    cout << "Podaj liczbe binarna: ";
    cin >> bin_num;

    int dec_num = bin2dec(bin_num);
    cout<<"Liczba dziesietna: "<<dec_num<<endl;

    return 0;
}
