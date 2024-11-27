#include <iostream>
using namespace std;

void gcd() {
    int a = 7, b = 13;
    while (a > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "gcd of two nums is: " << b << '\n';
}

int main() {
    gcd();
    return 0;
}
