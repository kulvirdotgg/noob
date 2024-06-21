#include <iostream>
#include <vector>
using namespace std;

void subsets(string ip, string op, vector<string> &res) {
    if (ip.size() == 0) {
        res.push_back(op);
        return;
    }

    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);

    ip.erase(ip.begin() + 0);
    subsets(ip, op1, res);
    subsets(ip, op2, res);
}

int main() {
    vector<string> res;
    string ip = "ab";

    subsets(ip, " ", res);

    for (string subset : res)
        cout << subset << ' ';
    cout << '\n';
}
