#include <iostream>
#include <stack>
using namespace std;

void delete_middle(stack<int> &st, int k) {
    if (k == 1) {
        st.pop();
        return;
    }

    int temp = st.top();
    st.pop();
    delete_middle(st, k - 1);
    st.push(temp);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(0);
    st.push(5);
    st.push(2);

    delete_middle(st, (st.size() / 2) + 1);

    cout << "Stack after deleting middle element: " << '\n';
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << '\n';

    return 0;
}
