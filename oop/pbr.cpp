#include <iostream>
using namespace std;

void pbb(int value) {
    cout << "value add " << &value << '\n';
    value++;
    cout << "value add " << &value << " and val " << value << '\n';
}

void pbp(int *ptr) {
    cout << "befrore ptr add " << ptr << '\n';
    cout << "value at ptr " << *ptr << '\n';
    ptr++;
    cout << "ptr add " << ptr << '\n';
}

void pbr(int &value) {
    cout << "befrore value add " << value << '\n';
    value++;
    cout << "value add " << value << '\n';
}

int main() {
    int value = 69;

    cout << "value var pbb " << value << " add of val " << &value << '\n';
    pbb(value);
    cout << "value var pbb " << value << " add of val " << &value << '\n';

    int *ptr = &value;
    pbp(ptr);
    cout << "ptr value " << ptr << " value var " << value
         << " address pointed by value var " << &value << '\n';

    cout << "value var " << value << " add of val " << &value << '\n';
    pbr(value);
    cout << "value var " << value << " add of val " << &value << '\n';
    return 0;
}
