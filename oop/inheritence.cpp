#include <iostream>
using namespace std;

class grand {
public:
    int a;
    float b;

    grand(int a, float b) {
        this->a = a;
        this->b = b;
    }
};

class p1 {
public:
    int a, b;
    p1(int a, int b) {
        cout << "p1 called" << '\n';
        this->a = a;
        this->b = b;
    }
};

class p2 {
public:
    int c;
    p2(int c) {
        cout << "p2 called " << '\n';
        this->c = c;
    }
};

class child : public p1, public p2 {
public:
    int sum;

    child(int a, int b, int c) : p1(a, b), p2(c) {
        cout << "yeah " << '\n';
        this->sum = a + b + c;
    }

    void print() {
        cout << this->sum << endl;
        return;
    }
};

int main() {
    child c(1, 2, 3);
    c.print();
    return 0;
}
