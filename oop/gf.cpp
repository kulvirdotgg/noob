// #include <iostream>
// using namespace std;
//
// class Test {
// private:
//     int x;
//     int y;
//
// public:
//     Test(int x = 0, int y = 0) {
//         this->x = x;
//         this->y = y;
//     }
//     static void fun1() { cout << "Inside fun1()"; }
//     static void fun2() { cout << "Inside fun2()"; }
// };
//
// int main() {
//     Test::fun2();
//     Test::fun1();
//     return 0;
// }

// #include <iostream>
// using namespace std;
//
// class Test {
// private:
//     int x;
//     int y;
//
// public:
//     Test(int x = 0, int y = 0) {
//         this->x = x;
//         this->y = y;
//     }
//
//     Test &setX(int a) {
//         x = a;
//         cout << this << endl;
//         return *this;
//     }
//
//     Test &setY(int b) {
//         y = b;
//         return *this;
//     }
//     void print() { cout << "x = " << x << " y = " << y << endl; }
// };
//
// int main() {
//     Test obj1;
//     obj1.setX(10).setY(20);
//     obj1.print();
//     return 0;
// }

#include <iostream>
using namespace std;

class Test {
private:
    int x;
    int y;

public:
    Test(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    void setX(int a) { x = a; }
    void setY(int b) { y = b; }
    void print() { cout << "x = " << x << " y = " << y << endl; }
    void destroy() {
        cout << "inside destroy " << '\n';
        delete this;
        cout << "destroy successful " << '\n';
    }
};

int main() {
    Test *obj = new Test(0, 0);
    (*obj).print();
    (*obj).destroy();
    return 0;
}
