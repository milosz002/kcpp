#include <iostream>

using namespace std;

/*
Pokaż działanie uni (niebezpieczenstwa, bledy)
- nazwij program: ZadUnia.cc
*/

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    Data myData;
    myData.intValue = 10;

    cout << "Int Value: " << myData.intValue << endl;
    cout << "Float Value: " << myData.floatValue << endl;
    cout << "Char Value: " << myData.charValue << endl;

    myData.floatValue = 3.14;

    cout << "Int Value: " << myData.intValue << endl;
    cout << "Float Value: " << myData.floatValue << endl;
    cout << "Char Value: " << myData.charValue << endl;

    myData.charValue = 'A';

    cout << "Int Value: " << myData.intValue << endl;
    cout << "Float Value: " << myData.floatValue << endl;
    cout << "Char Value: " << myData.charValue << endl;

    return 0;
}
