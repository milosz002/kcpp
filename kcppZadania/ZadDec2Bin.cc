#include <iostream>
#include <string>

using namespace std;

string dec2bin(int dec_num) {
    if (dec_num == 0) {
        return "0";
    }

    string bin_num;
    while (dec_num > 0) {
        bin_num = to_string(dec_num % 2) + bin_num;
        dec_num = dec_num / 2;
    }

    return bin_num;
}

int main() {
    int dec_num;

    cout << "Podaj liczbe dziesietna: ";
    cin >> dec_num;

    string bin_num = dec2bin(dec_num);

    cout << "Liczba binarna: " << bin_num << endl;

    return 0;
}
