#include<iostream>

using namespace std;

/*
Napisz prosty program z klasą
- metody deklarowane i definiowane w klasie | ok
- metody deklarowane w klasie, a definiowane poza klasą | ok
- zastosowanie 3 sekcji: public, private, protected | ok
- zmienne w każdej z sekcji | ok
- funkcje, które mają dostęp do zmiennych z sekcji protected i private
- funkcje inline
- nazwij program: ZadClass.cc
*/

class MyClass {
    public:
        int publicVariable;

        // konstruktor bez argumentów
        MyClass(){};

        // konstruktor z argumentami
        MyClass(int value){publicVariable = value;};

        void publicMethod() {
            cout << "Wywolano publicMethod()"<< endl;
            // można odwoływać się do zmiennych i metod z dowolnej sekcji
            privateVariable = 10;
            protectedMethod();
            privateMethod();
        }

        void setPrivateVariable(int value);

        void setProtectedVariable(int value);

        int GetPrivateVariable(){
            return privateVariable;
        }

        int GetProtectedVariable(){
            return protectedVariable;
        }

        inline void inlineMethod() {
            cout << "Wywolano inlineMethod()"<< endl;
        }

    protected:
        int protectedVariable;

        void protectedMethod() {
            cout <<"Wywolano protectedMethod()" << endl;
        }

    private:
        int privateVariable;

        void privateMethod() {
            cout << "Wywolano privateMethod()" << endl;
        }
};

void MyClass::setPrivateVariable(int value) {
    privateVariable = value;
    cout<<"setPrivateVariable"<< endl;
}

void MyClass::setProtectedVariable(int value) {
    protectedVariable = value;
    cout<<"setProtectedVariable" << endl;
}


int main() {
    MyClass obj;
    obj.publicVariable = 3;
    obj.publicMethod();

    // functionWithAccessToProtected(obj);
    obj.setPrivateVariable(11);
    cout << obj.GetPrivateVariable() << endl;
    obj.setProtectedVariable(17);
    cout << obj.GetProtectedVariable() << endl;

    obj.inlineMethod();

    return 0;
}

