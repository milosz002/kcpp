#include <iostream>
#include <cstring>

using namespace std;

enum ZnakZ {
    Koziorozec,
    Wodnik,
    Ryby,
    Baran,
    Byk,
    Bliznieta,
    Rak,
    Lew,
    Panna,
    Waga,
    Skorpion,
    Strzelec
};

int main() {
    string text;

    cout << "Podaj znak zodiaku: ";
    cin >> text;

    ZnakZ input;

    if (text == "Koziorozec"){
        input = Koziorozec;
    }
    else if (text == "Wodnik"){
        input = Wodnik;
    }
    else if (text == "Ryby"){
        input = Ryby;
    }
    else if (text == "Baran"){
        input = Baran;
    }
    else if (text == "Byk"){
        input = Byk;
    }
    else if (text == "Bliznieta"){
        input = Bliznieta;
    }
    else if (text == "Rak"){
        input = Rak;
    }
    else if (text == "Lew"){
        input = Lew;
    }
    else if (text == "Panna"){
        input = Panna;
    }
    else if (text == "Waga"){
        input = Waga;
    }
    else if (text == "Skorpion"){
        input = Skorpion;
    }
    else if (text == "Strzelec"){
        input = Strzelec;
    }
    else{
        input = static_cast<ZnakZ>(-1); // wartosc domyslna
    }

    string s = "Urodziles sie w dniach: ";

    switch (input){
        case Koziorozec:
            cout << s << "22 grudnia - 20 stycznia" << endl;
            break;
        case Wodnik:
            cout << s << "21 stycznia - 19 lutego" << endl;
            break;
        case Ryby:
            cout << s << "20 lutego - 20 marca" << endl;
            break;
        case Baran:
            cout << s << "21 marca - 20 kwietnia" << endl;
            break;
        case Byk:
            cout << s << "21 kwietnia - 20 maja" << endl;
            break;
        case Bliznieta:
            cout << s << "21 maja - 21 czerwca" << endl;
            break;
        case Rak:
            cout << s << "22 czerwca - 22 lipca" << endl;
            break;
        case Lew:
            cout << s << "23 lipca - 23 sierpnia" << endl;
            break;
        case Panna:
            cout << s << "24 sierpnia - 23 września" << endl;
            break;
        case Waga:
            cout << s << "24 września - 23 października" << endl;
            break;
        case Skorpion:
            cout << s << "24 października - 22 listopada" << endl;
            break;
        case Strzelec:
            cout << s << "23 listopada - 21 grudnia" << endl;
            break;
        default:
            cout<< "Podano bledny znak zodiaku. Ponizej lista popwanych nazw znakow zodiaku:"<<endl;
            cout<<"Koziorozec, Wodnik, Ryby, Baran, Byk, Bliznieta, Rak, Lew, Panna, Waga, Skorpion, Strzelec"<<endl;
    }

    return 0;
}
