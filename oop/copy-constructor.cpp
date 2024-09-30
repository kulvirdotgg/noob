#include <iostream>
using namespace std;

class a {
public:
    int num;

    a(int num) : num(num) {}
    a(a &obj) : num(obj.num + 11) {}
};

int main() {
    a obja(22);
    a copy_obja = obja;
    cout << obja.num << " : " << copy_obja.num << '\n';
    copy_obja.num = 69;
    cout << obja.num << " : " << copy_obja.num << '\n';

    a const_obj(obja);
    cout << obja.num << " : " << const_obj.num << '\n';
    const_obj.num = 420;
    cout << obja.num << " : " << const_obj.num << '\n';
}
