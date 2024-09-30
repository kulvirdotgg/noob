#include <iostream>
using namespace std;

int &max(int &x, int &y) {
    if (x > y)
        return x;
    return y;
}

int main() {
    int x = 49;
    int y = 420;
    cout << "add x " << &x << " add y " << &y << '\n';
    cout << "value returned " << max(x, y) << '\n';
}
