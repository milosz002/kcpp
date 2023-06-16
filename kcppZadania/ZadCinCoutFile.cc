#include <iostream>
#include <fstream>


using namespace std;

/*
Napisz program pokazujący funkcjonalność:
- wypisywania na ekran,
- +zapisywanie do strumienie błędów
- zapisywania do pliku,
- odczytywania z pliku,
*/

int main() {

    string filename;
    string text;

    cout<<"Podaj nazwe pliku: ";
    cin>>filename;
    cin.ignore(); // ignorowanie znaku nowej linii

    cout<<endl<<"Podaj co chcesz zapisac do pliku: ";
    getline(cin, text);
    cout<<endl;

    // Zapisywanie do pliku
    ofstream outputFile(filename); // zapisanie w nowej linii: ofstream outputFile(filename, ios::app);
    if (outputFile.is_open()) {
        outputFile<<text<<endl; // to co zapisujemy do pliku
        outputFile.close();
    } else {
        cerr<<"Blad podczas otwierania pliku do zapisu"<<endl;
    }

    // Odczytywanie z pliku
    ifstream inputFile(filename);
    if (inputFile.is_open()) {
        string line;
        cout<<"Odczytana zawartosc pliku: "<<filename<<": "<<endl;
        int line_num = 0;
        while (getline(inputFile, line)) {
            cout<<"["<<line_num<<"] "<<line<<endl;
            line_num++;
        }
        inputFile.close();
    } else {
        cerr<<"Blad podczas otwierania pliku do odczytu"<<endl;
    }

    return 0;
}