#include <iostream>
#include <cmath>

using namespace std;


/*
Bazując na pliku LClassMetodyAbstrakcyjne.cc stwórz program który oblicza:
- obwód, pole powierzchni
dla:
- kwadrat, trójkąt, prostokąt, koło (jako klasy dziedziczące po klasie abstrakcyjnej Figura),
oraz funkcja Dystans (dodatkowo w klasie Koło):
  Jeśli rząd podaje, że na każdego obywatela w sklepie (kościele etc) przypada X metrów kwadratowych (argument przekazywany do funkcji)
  to w jakiej odległości (promieniu - to ma funkcja Dystans zwracać) może znaleźć się następna osoba.
Nazwij program: ZadMetodyAbstrakcyjne.cc 
*/


class Figura {
public:
    virtual double obwod() = 0;
    virtual double polePowierzchni() = 0;
    virtual double dystans(double powierzchniaNaOsobe) const = 0;
};

class Kwadrat : public Figura {
private:
    double bok;

public:
    Kwadrat(double b) {
        bok = b;
    }

    double obwod() {
        return 4 * bok;
    }

    double polePowierzchni() {
        return bok * bok;
    }

    double dystans(double powierzchniaNaOsobe) const override {}
};

class Trojkat : public Figura {
private:
    double a, b, c;

public:
    Trojkat(double s1, double s2, double s3) {
        a = s1;
        b = s2;
        c = s3;
    }

    double obwod() {
        return a + b + c;
    }

    double polePowierzchni() {
        double p = obwod() / 2;
        double h = 2 * sqrt(p * (p - a) * (p - b) * (p - c)) / a;
        return (a * h) / 2;
    }

    double dystans(double powierzchniaNaOsobe) const override {}
};

class Prostokat : public Figura {
private:
    double a, b;

public:
    Prostokat(double s1, double s2){
        a = s1;
        b = s2;
    }

    double obwod() {
        return 2 * (a + b);
    }

    double polePowierzchni() {
        return a * b;
    }

    double dystans(double powierzchniaNaOsobe) const override {}
};

class Kolo : public Figura {
private:
    double promien;

public:
    Kolo(double r) {
        promien = r;
    }

    double obwod() {
        return 2 * 3.14159 * promien;
    }

    double polePowierzchni() {
        return 3.14159 * promien * promien;
    }

    double dystans(double powierzchniaNaOsobe) const override {
        return sqrt(powierzchniaNaOsobe / 3.14159);
    }
};

int main() {
    double powierzchniaNaOsobe;
    cout << "Podaj powierzchnie na jedna osobe: ";
    cin >> powierzchniaNaOsobe;

    Figura* figury[4];
    figury[0] = new Kwadrat(5.0);
    figury[1] = new Trojkat(3.0, 4.0, 5.0);
    figury[2] = new Prostokat(6.0, 8.0);
    figury[3] = new Kolo(4.0);

    for (int i = 0; i < 4; i++) {
        cout << "Figura " << i + 1 << ":" << endl;
        cout << "Obwod: " << figury[i]->obwod() << endl;
        cout << "Pole powierzchni: " << figury[i]->polePowierzchni() << endl;

        Kolo* kolo = dynamic_cast<Kolo*>(figury[i]);
        if (kolo != nullptr) {
            cout << "Dystans: " << kolo->dystans(powierzchniaNaOsobe) << endl;
        }

        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        delete figury[i];
    }

    return 0;
}
