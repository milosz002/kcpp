#include <iostream>

using namespace std;

class B;
 
class A {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    A()
    {
        private_variable = 10;
        protected_variable = 17;
    }

    void display_B(B& b);
 
    friend class B;
};

class B {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    B()
    {
        private_variable = 3764;
        protected_variable = 7889;
    }

    void display_A(A& a);

    friend class A;
};


void A::display_B(B& b)
{
    cout << "private_variable z klasy B: " << b.private_variable << endl;
    cout << "protected_variable z klasy B: " << b.protected_variable << endl;
}

void B::display_A(A& a)
{
    cout << "private_variable z klasy A: " << a.private_variable << endl;
    cout << "protected_variable z klasy A: " << a.protected_variable << endl;
}

int main()
{
    A a;
    B b;
    b.display_A(a);
    a.display_B(b);
    return 0;
}