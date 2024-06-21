#include <iostream>
#include <vector>
using namespace std;

void valid_parentheses(int size, int open_cnt, int close_cnt,
                       vector<string> &res, string curr) {
    if (curr.size() == 2 * size) {
        res.push_back(curr);
        return;
    }
    string curr1 = curr;
    string curr2 = curr;

    if (open_cnt < size) {
        curr1.push_back('(');
        valid_parentheses(size, open_cnt + 1, close_cnt, res, curr1);
    }

    if (close_cnt < open_cnt) {
        curr2.push_back(')');
        valid_parentheses(size, open_cnt, close_cnt + 1, res, curr2);
    }
}

int main() {
    int size = 3;
    vector<string> res;
    valid_parentheses(3, 0, 0, res, "");

    for (string s : res)
        cout << s << " ";
    cout << endl;
    return 0;
}
