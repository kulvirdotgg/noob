#include <iostream>
using namespace std;

class A {
public:
    int num;

    A() {}

    A(int num) : num(num) {}

    virtual void disp() {
        cout << "number of A base class is : " << num << '\n';
    }
    virtual void help() = 0;
};

class B : public A {
public:
    B() {}

    B(int num) : A(num) {}

    void disp() { cout << "number of A base class is : " << num << '\n'; }
    void help() {
        cout << "defined in base class from a abstract base class\n";
    }
};

int main() {
    A *a;
    B b(10);
    a = &b;
    a->disp();
    a->help();

    return 0;
}
