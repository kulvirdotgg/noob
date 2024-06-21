#include <iostream>
#include <vector>
using namespace std;

void permutation_with_space(string ip, string op, vector<string> &res) {
    if (ip.size() == 0) {
        res.push_back(op);
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(ip[0]);
    op2.push_back('_');
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    permutation_with_space(ip, op1, res);
    permutation_with_space(ip, op2, res);
}

int main() {
    string ip = "abc";
    string op = "";
    op.push_back(ip[0]);
    ip.erase(ip.begin());

    vector<string> res;
    permutation_with_space(ip, op, res);

    for (string s : res)
        cout << s << " ";
    cout << endl;
    return 0;
}
