#include <iostream>
using namespace std;

class Complex {
public:
    int x, y;
    Complex();
    Complex(int x, int y) {
        this->x = x;
        this->y = y;
    }
    Complex operator+(Complex);
};

Complex Complex::operator+(Complex c) {
    Complex temp(0, 0);
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}

class arr {
public:
    int a[5];

    arr(int *a) {
        for (int i = 0; i < 5; ++i) {
            this->a[i] = a[i];
        }
    }

    int operator[](int k) {
        if (k > 4 || k < 0) {
            return -1;
        }
        return a[k];
    }
    void operator++() { this->a[4]++; }
    void operator++(int) { this->a[4]++; }
};

int main() {
    Complex c1(3, 4);
    Complex c2(4, 5);
    c1 = c2 + c1;
    cout << c1.x << " : " << c1.y << '\n';

    int s[5] = {1, 2, 3, 4, 5};
    arr arr_obj(s);
    cout << arr_obj[4] << '\n';
    ++arr_obj;
    cout << arr_obj.a[4] << '\n';
    arr_obj++;
    cout << arr_obj.a[4] << '\n';

    return 0;
}
